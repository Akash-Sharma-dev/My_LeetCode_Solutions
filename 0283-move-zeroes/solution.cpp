class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), d = 0, i = 0;
        for(int i = 0; i<n; i++){
            if(nums[i])
            swap(nums[d++],nums[i]);
        }
    }
};
