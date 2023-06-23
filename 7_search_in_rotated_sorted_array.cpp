//leetcode 33
#include<iostream>
#include<vector>

using namespace std;

// beats 100% in runtime
int rotSearch(vector<int> v , int t){
    int left = 0;
    int right = v.size()-1;
    int mid = (left + right)/2;
    while(left<=right){
        int mid = (left + right)/2;
        if(v[mid]==t) { 
            return mid;
            }
        if(v[mid]>= v[left]){
            // check if the value is inside the range
            if( t>v[mid] || t<v[left] ) left = mid+1;
            else right = mid-1;
        }
        else{
            // check if the value is inside the range
             if( t<v[mid] || t>v[right] ) right = mid-1;
            else left = mid+1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<rotSearch(v, target);
    return 0;
}