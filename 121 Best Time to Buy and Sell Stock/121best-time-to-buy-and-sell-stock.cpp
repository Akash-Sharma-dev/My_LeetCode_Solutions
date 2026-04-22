class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, maxi = 0, n = prices.size();
        int stock = prices[0];
        for(int i = 0; i<n; i++){
            if(prices[i] < stock){
                stock = prices[i];
            }else{
                profit = prices[i] - stock;
                maxi = max(maxi, profit);
            }
        }
        return maxi;
    }
};