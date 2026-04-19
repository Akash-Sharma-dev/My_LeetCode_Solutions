class Solution {
public:
    void quick(vector<int>&nums, int start, int end){
        if(start<end){
            int pivot = nums[(start+end)/2];
            
            int low = start;
            int high = end;
            
            while(low<=high){
                while(low<=high && nums[low] < pivot){
                    low++;
                }
                while(low<=high && nums[high] > pivot){
                    high--;
                }
                if(low<=high){
                    swap(nums[low], nums[high]);
                    low++;
                    high--;
                }
            }
            
            quick(nums, start, high);
            quick(nums, low, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quick(nums,0,nums.size()-1);
        return nums;
    }
};