//leetcode 39
//using backtracking

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void recursion(vector<int>& candidates, int target, vector<int>& curarr, int currsum, int curind, vector<vector<int>>& res) {
    if (currsum > target) {
        return;
    }
    if (currsum == target) {
        res.push_back(curarr);
        return;
    }
    for (int i = curind; i < candidates.size(); i++) {
        curarr.push_back(candidates[i]);
        currsum += candidates[i];
        recursion(candidates, target, curarr, currsum, i, res);  // Start from index i to avoid duplicates
        curarr.pop_back();
        currsum -= candidates[i];
    }
 }

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
vector<vector<int>> res;
vector<int> curcomb;
sort(candidates.begin(), candidates.end());
recursion(candidates, target, curcomb, 0, 0, res);
return res;
}