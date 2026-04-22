class Solution {
public:
    bool check(vector<int>& nums) {
        int dec_count = 0, n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] > nums[(i+1)%n]){
                dec_count++;
            }
            if(dec_count>1) return false;
        }
        return true;
    }
};