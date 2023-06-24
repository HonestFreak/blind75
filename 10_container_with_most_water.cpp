//leetcode 11
#include<iostream>
#include<vector>
using namespace std;

//beats 98.1% in runtime
int mostwater(vector<int> v){
    int left = 0;
    int right = v.size()-1;
    int maxarea = 0;
    while(left<right){
        int area = min(v[right], v[left]) * (right-left);
        maxarea = max(maxarea, area);
        if( v[left] < v[right] ) left++;
        else right--;
    }
    return maxarea;
}

int main()
{
    vector<int> v= {1,8,6,2,5,4,8,3,7};
    cout<<mostwater(v);
    return 0;
}