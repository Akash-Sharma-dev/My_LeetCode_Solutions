class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        int temp;
        for(int i = 0;i<n;i++){
            if(nums[i]!=0){
                temp = nums[i];
                nums[i] = 0;
                nums[x] = temp;
                x++;
            }
        }
    }
};
