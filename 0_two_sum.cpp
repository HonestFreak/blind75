//leetcode 1
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//beats 95% in runtime
vector<int> twosum(vector<int> nums , int target){
    unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
    return {-1, -1};
}

int main()
{
    vector<int> v = {2,7,11,15};
    int s=9;
    vector<int> res = twosum(v ,s);
    for(int i : res) cout<<i<<" ";
    return 0;
}