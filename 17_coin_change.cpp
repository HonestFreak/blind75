//leetcode 322
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int coin(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    int i = 11;
    vector<int> v = {1, 2, 5};
    cout << coin(v,i);
    return 0;
}
