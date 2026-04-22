class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();

        for(int i = 0; i<n; i++){
            if(i==n-1 || nums[i] < nums[i+1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};