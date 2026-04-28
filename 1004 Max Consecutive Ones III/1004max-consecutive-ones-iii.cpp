class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), left = 0, zeros = 0, maxi = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==0) zeros++;
            if(zeros>k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};