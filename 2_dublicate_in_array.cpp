// leetcode 217
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>

using namespace std;

//using Unordered Map (beats 79.25% in runtime and 58.94% in memory)
bool isdublicateMap(vector<int> v){
    unordered_map<int,int> m;
    for(int i=0; i<v.size(); i++){
        if(m[v[i]]++) return true;
    }
    return false;
}

// using Unordered Set (beats 51.76% in runtime)
bool isdublicateSet(vector<int> v){
    unordered_set<int> s = {};
    for(int i : v){
        if(s.find(i) != s.end()) return true;
        else s.insert(i);
    }
    return false;
}

// using Sorting (beats 66.98% in runtime)
bool isdublicateSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }

using namespace std;
int main()
{
    vector<int> v = {1,1,5,3,6};
    cout<<isdublicateMap(v)<<endl;
    cout<<isdublicateSet(v)<<endl;
    cout<<isdublicateSort(v)<<endl;
    return 0;
}