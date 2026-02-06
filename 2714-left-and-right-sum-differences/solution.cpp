class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size(),i = 0;
        vector<int>left(n);
        vector<int>right(n);
        vector<int>result(n);
        left[0] = 0, right[n-1] = 0;
        for(int i = 1; i<n; i++){
            left[i] = left[i-1] + nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            right[i] = right[i+1] + nums[i+1];
        }
        for(int i = 0; i<n; i++){
            result[i] = abs(left[i] - right[i]);
        }
        return result;
    }
};
