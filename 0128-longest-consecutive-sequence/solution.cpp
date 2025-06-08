class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n = nums.size(),count = 1,maxi = 1;
        sort(nums.begin(),nums.end());
        for(int i = 1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i] != nums[i-1]+1) count = 1;
            else count++;
            maxi = max(maxi,count);
        }
        return maxi;
    }
};
