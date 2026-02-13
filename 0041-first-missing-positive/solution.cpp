class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        long int max = 0;
        unordered_map<int,int>mpp(n);
        for(int i = 0; i<n; i++){
            if(nums[i]>0){
                mpp[nums[i]]++;
            }
            if(nums[i]>max){
                max=nums[i];
            }
        }
        for(int i = 1;i<=max+1;i++){
            if(mpp[i] == 0){
                return i;
            }
        }
        return 1;
    }
};
