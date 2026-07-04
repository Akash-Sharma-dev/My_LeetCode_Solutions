class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool flag1 = true, flag2 = true;
        for(int i = 1; i<n; i++){
            if(nums[i] > nums[i-1]){
                flag2 = false;
            }else if(nums[i] < nums[i-1]){
                flag1 = false;
            }
        }
        return (flag1 || flag2);
    }
};