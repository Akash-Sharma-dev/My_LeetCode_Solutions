class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, n = nums.size(), max_c = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                count++;
            }else{
                count=0;
            }
            if(count>max_c){
                max_c = count;
            }
        }
        return max_c;
    }
};