//leetcode 15
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//beats 68% in runtime and 98% in memory
vector<vector<int>> threesum(vector<int>& v) {
    sort(v.begin(),v.end());
    if(v[0]>0 || v.size()<3) return {};
    vector<vector<int>> res;
    for(int i =0; i<v.size()-2; i++){
        if( v[i] > 0 ) return res;   
        int left= i+1;
        int right = v.size()-1;
        while(left<right){
            if(v[left]+v[right] + v[i]==0) { 
                int templeft = left ; int tempright = right;    // storing temp to avoid repetetive values
                res.push_back({v[i], v[left], v[right]});
                while(left < right && v[left] == v[templeft]) left++;   //skipping repetetive values
                while(left < right && v[right] == v[tempright]) right--;
                }
            else if(v[left]+v[right] + v[i] < 0) left++;
            else right--;
        }
        while(i+1 < v.size() && v[i] == v[i+1]) i++; //skipping repetetive values
    }
    return res;
}

int main()
{
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threesum(v);
    for(vector<int> i : ans){
        for(int j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}