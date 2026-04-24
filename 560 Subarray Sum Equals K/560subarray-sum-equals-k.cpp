class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int presum = 0, count = 0,n = nums.size();
        mpp[presum]++;
        for(int i = 0; i<n; i++){
            presum += nums[i];
            if(mpp.find(presum-k) != mpp.end())
                count += mpp[presum-k];     
            mpp[presum]++;
        }
        return count;
    }
};