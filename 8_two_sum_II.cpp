//leetcode 167
#include<iostream>
#include<vector>
using namespace std;

//beats 89% in runtime and 75% in memory
//add the smallest and bigges elements
//change their indexes accordingly to get he exact result (2 pointer)
vector<int> twoSum(vector<int>& v, int t) {
   int left = 0;
   int right = v.size()-1;
   while(left<right){
        if(v[left]+v[right] == t) {
            return {left+1, right+1};
        }
        else if(v[left]+v[right] >= t)  right--;
        else left++;
   }
    return {-1,-1};
}

int main()
{   
    vector<int> v = {2,7,11,15};
    int t = 9;
    vector<int> p = twoSum(v, t);
    for(int i:p){
        cout<<i<<" ";
    }
    return 0;
}