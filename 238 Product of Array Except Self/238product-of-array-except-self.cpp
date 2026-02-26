class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(),pro2=1,x;
        vector<int>pro(n);
        pro[0] = 1;
        for(int i = 1; i<n; i++){
            pro[i] = pro[i-1] * nums[i-1];
        }
        for(int i = n-1; i>=0; i--){
            x = nums[i];
            nums[i] = pro[i]*pro2;
            pro2 *= x;
        }
        return nums;
    }
};