//leetcode 300
// Patience Sort : 
// Create a vector to store 'longest subsequence array'. Keep it's initial element
// to be the first element of given array. Now loop through the array.
// if element is greater than the last element of long_sub vector, append it.
// else insert it at the position just before the number greater than it in that vector.

#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> v, int k){
    int left=0, right = v.size()-1;
    int mid; 
    while(left<=right) {
    int mid = (left + right )/2;
    if(k == v[mid]) return mid;
    else if(v[mid] < k) left = mid+1;
    else right = mid-1;
}
return left;
}

//beats 79% in runtime
int longest_sub(vector<int>& v) {
vector<int> sub;
sub.push_back(v[0]);
for(int i=1 ; i<v.size(); i++){
    if(v[i]>sub.back()) sub.push_back(v[i]);
    else {
        int j = binary(sub, v[i]);
        sub[j] = v[i];
        }
    }
return sub.size();
}

int main()
{
    vector<int> v = {0,1,0,3,2,3}; 
    cout<<longest_sub(v);
return 0;
}