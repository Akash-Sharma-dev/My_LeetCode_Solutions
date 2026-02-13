class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c = 0, n = nums.size();
        vector<int>freq(101,0);

        for(int i = 0; i<n; i++){
            c += freq[nums[i]];
            freq[nums[i]]++;
        }
        return c;
    }
};
