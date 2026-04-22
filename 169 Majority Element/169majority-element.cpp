class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major, n = nums.size(), vote = 0;
        for(int i = 0; i<n; i++){
            if(vote==0) major = nums[i];
            if(nums[i] == major) vote++;
            else vote--;
        }
        return major;
    }
};