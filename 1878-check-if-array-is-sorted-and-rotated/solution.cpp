class Solution {
public:
    bool check(vector<int>& nums) {
        int change = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
               change++;
            }
        }
        if(change<=1) return 1;
        else return 0;
        return 1;
    }
};
