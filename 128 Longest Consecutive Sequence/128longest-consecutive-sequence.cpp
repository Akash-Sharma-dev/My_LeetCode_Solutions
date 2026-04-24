class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_map<int,int>mpp;
        int max_l = 0;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto it : mpp){
            int el = it.first;
            if(mpp.find(el-1) == mpp.end()){
                int count = 1;
                while(mpp.find(++el) != mpp.end()) count++;
                max_l = max(max_l, count);
            }
        }
        return max_l;
    }
};