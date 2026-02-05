class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1, j = n-1,sq_l, sq_r;
        vector<int>arr(n);

        while(l<=r){
             sq_l = nums[l] * nums[l];
             sq_r = nums[r] * nums[r];

             if(sq_l > sq_r){
                arr[j] = sq_l;
                l++;
             }else{
                arr[j] = sq_r;
                r--;
             }
             j--;
        }
        return arr;
    }
};
