#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minbuy = prices[0];
        for(int i=1 ; i<prices.size(); i++){
            if(minbuy>prices[i]){
                minbuy=prices[i];
            }
            else if((prices[i] - minbuy) > profit){
                profit = prices[i] - minbuy;
            } 
        }
        return profit;
    }


int main()
{
    vector<int> l = {7,1,5,3,6,4};
    cout<<maxProfit(l);
    return 0;
}