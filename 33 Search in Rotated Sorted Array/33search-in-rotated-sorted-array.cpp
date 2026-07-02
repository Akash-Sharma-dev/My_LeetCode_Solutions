class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size(), s = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] < nums[s]){
                s = i;
            }
        }
        int l = 0, r = s-1,m=0;
        while(l<=r){
            m = (l+r)/2;
            if(nums[m] == target){
                return m;
            }else if(nums[m] < target){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        l = s, r = n-1;
        while(l<=r){
            m = (l+r)/2;
            if(nums[m] == target){
                return m;
            }else if(nums[m] < target){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        return -1;
    }
};