//leetcode 139
#include<iostream>
#include<vector>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.size(),false);
    dp[0] = true;
    for(int i=0; i<s.size(); i++){
        if(dp[i]){
            for(auto str: wordDict){
                if(s.substr(i,str.size()).compare(str)==0){
                    dp[i+str.size()] = true;
                }
            }
        }
    }
    return dp[s.size()];
}

int main()
{
    string s = "leetcode";
    vector<string> wordDict = {"leet","codel"};
    cout<<wordBreak(s, wordDict);
    return 0;
}