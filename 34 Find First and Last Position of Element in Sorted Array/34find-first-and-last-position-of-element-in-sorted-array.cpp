class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(), low = 0, high = n-1;

        while(low<=high && (nums[low]!= target || nums[high] != target)){
            int mid = (low+high)/2;

            if(nums[mid] < target){
                low = mid+1;
            }else if(nums[mid] > target){
                high = mid-1;
            }else{
                if(nums[low] != target){
                    low++;
                }
                if(nums[high] != target){
                    high--;
                }
            }
        }
        if(low>high)
            return {-1,-1};
        return {low,high};
    }
};