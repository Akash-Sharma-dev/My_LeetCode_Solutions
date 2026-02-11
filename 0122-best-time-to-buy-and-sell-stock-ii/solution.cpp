class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_profit = 0,max_profit = 0, profit = 0, min = prices[0], n = prices.size(),i = 1;

        for(i = 1; i<n; i++){
            if(prices[i] < prices[i-1] && prices[i-1] != min){
                total_profit += (prices[i-1] - min);
                min = prices[i];
            }
            if(prices[i] <= min){
                min = prices[i];
                continue;
            }
        }
        return total_profit + prices[i-1] - min;
    }
};
