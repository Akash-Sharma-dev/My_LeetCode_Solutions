class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, n = nums.size();
        int j = i+1;

        while(j<n){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }else{
                j++;
            }
        }
        return i+1;
    }
};
