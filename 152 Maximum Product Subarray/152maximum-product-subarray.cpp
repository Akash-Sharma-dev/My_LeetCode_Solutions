class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), left = 0, right = 0, pos = 1, prod = 1,maxi = INT_MIN;
        bool flag = true;
        for(int i = 0; i<n; i++){
            if(nums[i]==0){
                maxi = max(0,maxi);
                prod = 1;
                pos = 1;
                flag = true;
                continue;
            }
            prod *= nums[i];
            pos *= nums[i];
            maxi = max({maxi, pos, prod});
            if(prod < 0 && flag){
                pos = 1;
                flag = false;
            }
        }
        return maxi;
    }
};