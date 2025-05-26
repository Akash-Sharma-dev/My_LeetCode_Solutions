class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,sum = 0,i,n = nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==1){
                sum++;
            }else{
                count = max(count,sum);
                sum = 0;
            }
        }
        count = max(count,sum);
        return count;
    }
};
