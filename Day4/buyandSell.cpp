https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      int profit=0;
      int prev_profit=0;
      int N = prices.size();
      int right_max=prices[N-1];
    for(int i=N-2;i>=0;i--){
        if(prices[i]>right_max){
right_max=prices[i];
continue;
        }
        if(prices[i]<right_max){
            profit=right_max-prices[i];
            if(profit>prev_profit){
                prev_profit=profit;
            }
        }
    }  
return prev_profit;
    }
};