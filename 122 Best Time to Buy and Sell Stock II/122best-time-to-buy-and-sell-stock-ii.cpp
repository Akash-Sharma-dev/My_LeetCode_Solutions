class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), profit = 0, maxi = 0, stock = prices[0], total = 0, i = 0;
        for(; i<n-1; i++){
            if(prices[i] > prices[i+1]){
                total += (prices[i] - stock);
                stock = prices[i+1];
            }
        }
        total += (prices[i] - stock);
        return total;
    }
};