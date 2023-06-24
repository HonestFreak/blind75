//leetcode 70
#include<iostream>
#include<vector>
using namespace std;

//using recursion
int solve(int n, vector<int> &v){
    if(n<=2) return n;
    if (v[n] != -1 ) return v[n];
    v[n] = solve(n-1,v) + solve(n-2,v);
    return v[n];
}

int climb(int n){
    if(n<=2) return n;
    vector<int> v(n+1);
    for(int i = 0 ; i<=n ; i++) {
        v[i] = -1;}
    return solve(n, v);
}

//without recursion
int climb_norec(int n){
    if(n<=2) return n;
    vector<int> v(n+1);
    v[0]=0;
    v[1]=1;
    v[2]=2;
    for(int i=3; i<=n; i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
}

int main()
{
    int n = 45;
    cout<<climb(n)<<endl;
    cout<<climb_norec(n);
    return 0;
}