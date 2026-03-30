class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0, left = 0, right = 0, n = nums.size();

        for(int i = 0; i<n; i++){
            total += nums[i];
        }

        for(int i = 0; i<n; i++){
            left += nums[i];
            right = total - left;
            nums[i] = abs((left - nums[i])-right);
        }
        return nums;
    }
};