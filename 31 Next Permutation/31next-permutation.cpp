class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),i = n-1;

        while(i>=1){
            if(nums[i-1] < nums[i]){
                break;
            }
            i--;
        }
        if(i==0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int j = n-1;
        while(j>=i){
            if(nums[j] > nums[i-1]){
                break;
            }
            j--;
        }
        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i,nums.end());
    }
};