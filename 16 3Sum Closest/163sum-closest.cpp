class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(),l,r,x,y,z,sum,diff,close,m_diff = INT_MAX;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n-2; i++){
            l=i+1;
            r=n-1;
            x = nums[i];
            while(l<r){
                y = nums[l], z = nums[r];
                sum = x+y+z;
                if(sum == target){
                    
                    return target;
                }else if(sum < target){
                    l++;
                }else{
                    r--;
                }
                diff = abs(sum - target);
                if(diff<m_diff){
                    m_diff = diff;
                    close = sum;
                }
            }
        }
        return close;
    }
};