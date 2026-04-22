class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),sum = 0,max_s = INT_MIN;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            max_s = max(max_s, sum);
            if(sum<0) sum = 0;
        }
        return max_s;
    }
};