class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), f = 0, m = 0, l = n-1;
        int count = 0;
        while(m<=l){
            if(nums[m] == 0){
                swap(nums[f], nums[m]);
                f++;
            }
            if(nums[m] == 2){
                swap(nums[l], nums[m]);
                l--;
                continue;
            }
            m++;
        }
    }
};