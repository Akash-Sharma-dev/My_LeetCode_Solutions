class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(),count = 0, majority;
        for(int i = 0;i<n;i++){
            if(count==0){
                majority = nums[i];
                count = 1;
                continue;
            }
            if(nums[i]==majority) count ++;
            else count--;
        }
        return majority;
    }
};
