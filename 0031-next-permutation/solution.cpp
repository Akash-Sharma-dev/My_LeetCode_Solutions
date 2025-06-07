class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),i;
        for (i = n - 1; i > 0; i--) {
            if(nums[i]>nums[i-1]) break;
        }
        int x = i, y = n-1;
        while(x<y){
            swap(nums[x],nums[y]);
            x++;
            y--;
        }
        int place = i-1;
        if(place==-1) return;
        while(i<n){
            if(nums[i]>nums[place]){
                swap(nums[i],nums[place]);
                break;
            }
            i++;
        }
    }
};
