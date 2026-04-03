class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size(), l = 0, r = n-1;
        while(l<r && nums[l] <= nums[l+1]){
            l++;
        }
        while(l<r && nums[r] >= nums[r-1]){
            r--;
        }
        cout<<l<<" "<<r;
        int mini = nums[l], maxi = nums[l];
        for(int i = l; i<=r; i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        //cout<<maxi<<" "<<mini;
        while(l>0 && nums[l-1] > mini){
            l--;
        }
        while(r<n-1 && nums[r+1] < maxi){
            r++;
        }
        if(l==r) return 0;
        return r-l+1;
    }
};