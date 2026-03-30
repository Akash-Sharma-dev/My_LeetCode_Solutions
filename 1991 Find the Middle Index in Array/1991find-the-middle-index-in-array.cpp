class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int n = nums.size(), lsum = 0, total = 0, rsum = 0;

       for(int i = 0; i<n; i++){
        total += nums[i];
       }

       for(int i = 0; i<n; i++){
        rsum = total - lsum - nums[i];
        if(lsum == rsum){
            return i;
        }
        lsum += nums[i];
       }

       return -1;
    }
};