class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1 = nums[0], max2 = nums[0], max3 = nums[0], n = nums.size();
        bool flag = false;
        for(int i = 0; i<n; i++){
            if(nums[i] > max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }else if(nums[i] > max2 && nums[i] != max1){
                max3 = max2;
                max2 = nums[i];
            }else if(nums[i] > max3 && nums[i] != max2 && nums[i] != max1){
                max3 = nums[i];
                flag = true;
            }
            if(nums[i] != max1 && max2 == max1){
                max2 = nums[i];
            }else if(nums[i] != max1 && nums[i] != max2 && (max3 == max1 || max3 == max2)){
                max3 = nums[i];
                flag = true;
            }
        }
        if(max3 != max1 && max3 != max2) return max3;
        return max1;
    }
};
    
