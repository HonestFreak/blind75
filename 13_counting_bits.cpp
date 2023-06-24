//leetcode 338
#include<iostream>
#include<vector>
using namespace std;

int numofbits(int n){
    int count = 0;
    while(n!=0){
        n &= (n-1);
        count++;
    }
    return count;
}

//beats 98% in runtime
vector<int> bits(int n){
    vector<int> v;
    for(int i =0 ; i<=n ; i++){
        v.push_back(numofbits(i));
    }
    return v;
}

int main()
{
    vector<int> v = bits(5);
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}