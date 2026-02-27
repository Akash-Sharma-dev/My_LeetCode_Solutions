class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size(),diff;
        if(n==1) return 0;
        sort(nums.begin(), nums.end());
        int low=0,high=1,count=0;

        while(low<=high && high<n){
            diff = abs(nums[high] - nums[low]);
            if(diff==k){
                low++;
                high++;
                while(high<n && nums[low] == nums[low-1] && nums[high] == nums[high-1]){
                    low++;
                    high++;
                }
                count++;
            }else if(diff<k){
                high++;
            }else{
                low++;
            }
            if(low==high){
                high++;
            }
        }
        return count;    
    }
};