class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = candies[0], n = candies.size();
        vector<bool>maxCandies(n,false);
        for(int i = 0; i<n; i++){
            maxi = max(maxi, candies[i]);
        }
        for(int i = 0; i<n; i++){
            if(candies[i] + extraCandies >= maxi){
                maxCandies[i] = true;
            }
        }
        return maxCandies;
    }
};
