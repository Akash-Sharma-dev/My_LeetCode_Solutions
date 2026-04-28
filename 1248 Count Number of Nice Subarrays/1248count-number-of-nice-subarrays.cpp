class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), preCount = 0, count = 0;
        unordered_map<int,int>mpp;
        mpp[preCount]++;
        for(int i = 0; i<n; i++){
            if(nums[i]%2) preCount++;
            if(mpp.find(preCount-k) != mpp.end()){
                count += mpp[preCount-k];
            }
            mpp[preCount]++;
        }
        return count;
    }
};