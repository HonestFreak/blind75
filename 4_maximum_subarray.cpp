//leetcode 53
#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

//beats 88% in runtime
int maxsubarr(vector<int> nums){
    int maxSum = INT_MIN;  // can use nums[0] too
    int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            if (currentSum > maxSum) maxSum = currentSum;
            if (currentSum < 0) currentSum = 0;
        }
        
    return maxSum;
}

int main()
{
    vector<int> v= {-3,2,-5,8,-1,2,3,-5};
    cout<<maxsubarr(v);
    return 0;
}