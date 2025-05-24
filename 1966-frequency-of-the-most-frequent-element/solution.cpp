class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long total = 0;
        int result = 0, left = 0;
       for(int right = 0;right<n;right++){
           total += nums[right];
           while((long )(right-left+1)*nums[right]-total > k){
             total -= nums[left];
             left++;
           }
           result = max(result,(right-left+1));
        }
        return result;
    }
};
