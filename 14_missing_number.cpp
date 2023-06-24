//leetcode 268
#include<iostream>
#include<vector>
using namespace std;

//beats 94.6% in runtime
int missing_num(vector<int> v){
    int sum =0;
    int n = v.size();
    for(int i=0 ; i<n ; i++){
        sum+=v[i];
    }
    return (n*(n+1)/2) - sum;
}

int main()
{
    vector<int> v = {3,0,1};
    cout<<missing_num(v);
    return 0;
}