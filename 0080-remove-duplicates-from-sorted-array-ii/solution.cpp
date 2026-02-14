class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(),count = 1,k = 1;
        for(int i = 1; i<n; i++){
            if(nums[i] != nums[i-1]) count = 1;
            else count++;
            if(count > 2) continue;
            nums[k++] = nums[i];
        }
        return k;
    }
};
