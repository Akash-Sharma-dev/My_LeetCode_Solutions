class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(),start = 0,low,high;
        for(int i = 0; i<n; i++){
            if(nums[i] <= nums[start] && nums[(n + (i-1))%n] > nums[i]){
                start = i;
            }
        }
        
        low = 0;
        high = start-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid] == target){
                return true;
            }else if (nums[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        low = start;
        high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return true;
            }else if (nums[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return false;
    }
};