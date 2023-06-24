//leetcode 371
#include<iostream>
#include<math.h>
using namespace std;

//beats 100% in runtime
int sum(int a, int b){
    int c; 
    while(b !=0 ) {
        c = (a&b);
        a = a ^ b;
        b = (unsigned int)(c)<<1;
      }
    return a;
}

//recursive method (beats 100% in runtime)
int sumrec(int a, int b){
    if( b ==0 ) return a;   //base case
    int c = a&b;
    a = a^b;
    b = (unsigned int) (c)<<1;
    return sumrec(a,b);
}

//mathematical method
int summath(int a, int b){
    return log2(pow(2,a)*pow(2,b));
}

int main()
{
    cout<<sum(1,4)<<endl;
    cout<<summath(1,4)<<endl;
    cout<<sumrec(1,4);
    return 0;
}