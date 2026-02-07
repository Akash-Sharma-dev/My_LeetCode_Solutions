class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(), mis = 0;
        if(n==1) return nums[0];
        for(int i = 0;i<n;i++){
            mis ^= nums[i];
        }
        return mis;
    }
};
