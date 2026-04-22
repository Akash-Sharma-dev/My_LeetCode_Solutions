class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(), start = n - k%n, i = 0;
        vector<int>arr(n);
        while(i<n){
            arr[i] = nums[(start+i)%n];
            i++;
        }
        for(int i = 0; i<n; i++){
            nums[i] = arr[i];
        }
    }
};