//leetcode 152
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// beats 87.21%
int maxProduct(vector<int>& v) {
   int maxp = v[0];
   int minp = v[0];
   int ans = v[0];

    for(int i = 1 ; i<v.size() ; i++){
       if(v[i] < 0) swap(maxp, minp);  // max and min swaps if negative value is encountered
       maxp = max(v[i], maxp*v[i]);
       minp = min(v[i] , minp*v[i]);
       ans = max(ans, maxp);
} 
return ans;
}

int main()
{
    vector<int> v= {2,3,-2,4};
    cout<<maxProduct(v);
    return 0;
}