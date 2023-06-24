//leetcode 190
#include<iostream>
using namespace std;

//beats 100% in runtime
uint32_t reverseBits(uint32_t n) {
    int ans = 0;
    for( int i = 0 ; i<32; i++){
        ans<<=1;
        ans = ans | (n&1);
        n>>=1;
    }
    return ans;
    }

int main(){
    return 0;
}