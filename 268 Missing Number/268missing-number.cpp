class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xo = 0;
        for(int i = 0; i<n; i++){
            xo ^= i ^ nums[i];
        }
        return xo^n;
    }
};