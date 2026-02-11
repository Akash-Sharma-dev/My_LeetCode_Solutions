class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = nums[0], diff = -1, max_d = -1, n= nums.size();

        for(int i = 1; i<n; i++){
            if(nums[i] <= min){
                min = nums[i];
                continue;
            }
            diff = nums[i] - min;
            max_d = max(max_d, diff);
        }
        return max_d;
    }
};
