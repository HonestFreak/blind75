//leetcode 238
#include<iostream>
#include<vector>

using namespace std;

// beats 87.41% in runtime
vector<int> product(vector<int> v){
    vector<int> prepostarr;
    int post = 1; int pre = 1;

    for(int i = 0 ; i<v.size(); i++){
        prepostarr.push_back((pre));
        pre = v[i] * pre;
    }
    
    for(int i = v.size()-1 ; i>=0; i--){
        prepostarr[i] *= post;
        post = v[i] * post;
    }
    
    return prepostarr;

}

int main()
{
    vector<int> v = {1,2,3,4};
    vector<int> ans = product(v);
    for(int i : ans) cout<<i<<" ";
    return 0;
}