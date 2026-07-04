class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), low = 0, high = n-1;
        if(nums[low]<nums[high]) return nums[low];

        while(low+1<high){
            int mid = (low+high)/2;

            if(nums[low]>nums[mid]){
                high = mid;
            }else if(nums[mid]>nums[high]){
                low = mid;
            }
        }
        return nums[high];
    }
};