class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int left = 0, n = nums.size(), dist = 0, count = 0;
        unordered_map<int,int>freq;
        for(int right = 0; right<n; right++){
            if(freq[nums[right]] == 0){
                dist++;
            }
            freq[nums[right]]++;
            while(dist > k){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0){
                    dist--;
                }
                left++;
            }
            count += (right - left + 1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums, k-1);
    }
};