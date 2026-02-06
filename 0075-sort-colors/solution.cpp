class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), r = 0, w = 0, b = n-1;

        while(w<=b){
            if(nums[w] == 0){
                swap(nums[w],nums[r++]);
            }
            if(nums[w] == 2){
                swap(nums[w],nums[b--]);
                continue;
            }
            w++;
        }
    }
};
