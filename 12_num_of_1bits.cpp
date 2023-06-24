//leetcode 191
#include<iostream>
using namespace std;

//Brian Kernigham's Algorithm
//clear the rightmost set until the number becomes 0
int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            n &= (n-1);     //clearing the rightmost set
            count++;
        }
        return count;
    }

int main()
{
    uint32_t n = 00000000000000000000000000001011; 
    cout<<hammingWeight(n);
    return 0;
}