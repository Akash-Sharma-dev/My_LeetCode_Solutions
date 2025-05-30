class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int>mpp;
        int count = 0;
        int presum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            presum += nums[i];
            if(presum == k){
                count++;
            }
            if(mpp.find(presum-k) != mpp.end()){
                count += mpp[presum-k];
            }
            mpp[presum]++;
        }
        return count;
    }
};
