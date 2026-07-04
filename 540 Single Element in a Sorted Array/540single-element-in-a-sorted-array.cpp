class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), low = 0, high = n-1;
        if(n==1) return nums[0];
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid] != nums[(n+mid-1)%n] && nums[mid] != nums[(n+mid+1)%n]){
                return nums[mid];
            }
            if(nums[mid] == nums[(mid-1)%n]){
                if((mid - low)%2){
                    low = mid+1;
                }else{
                    high = mid-2;
                    cout<<low<<" "<<high<<endl;
                }
            }else if(nums[mid] == nums[(mid+1)%n]){
                if((high - mid)%2){
                    high = mid - 1;
                }else{
                    low = mid+2;
                }
            }
}
return 0;
    }
};