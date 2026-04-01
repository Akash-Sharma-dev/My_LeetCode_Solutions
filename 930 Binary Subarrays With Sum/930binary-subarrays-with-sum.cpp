class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int>prefix;
        int presum = 0, count=0, n = nums.size();
        prefix[presum] = 1;
        for(int i = 0; i<n; i++){
            presum += nums[i];
            if(prefix.find(presum - goal) != prefix.end()){
                count += prefix[presum-goal];
            }
            prefix[presum]++;
        }
        return count;
    }
};