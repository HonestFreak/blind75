//leetcode 153
#include<iostream>
#include<vector>
using namespace std;

// beats 100% in runtime
int minimumInRot(vector<int> v){
    int left = 0; 
    int right = v.size()-1;
    while(left<right){          // kind of binary search
        int mid = (right + left) /2;
        if(v[mid]> v[right]) left = mid+1;  
        else right = mid;
    }
    return v[right];
}

int main()
{
    vector<int> v = {4,5,6,7,0,1,2};
    //               0 1 2 3 4 5 6
    cout<<minimumInRot(v);
 return 0;
}

