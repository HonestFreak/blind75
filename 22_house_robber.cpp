//leetcode 198
#include<iostream>
#include<vector>
using namespace std;

//beats 100% in runtime
int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2; i<=nums.size(); i++){
            dp[i]=max(nums[i-1]+dp[i-2], dp[i-1]);
        }
        return dp[nums.size()];
}

int main()
{   
    vector<int> v = {1,2,3,1};
    cout<<rob(v);
    return 0;
}
