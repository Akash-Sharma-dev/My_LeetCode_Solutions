class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        int left,right,a,b,c,d,n = nums.size();
        long long sum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            a = nums[i];
            for(int j = i+1; j<n; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                b = nums[j];
                left = j+1;
                right = n-1;
                while(left<right){
                    c = nums[left];
                    d = nums[right];
                    sum = (long long) a + b + c + d;

                    if(sum==target){
                        res.push_back({a,b,c,d});
                        while(left<right && nums[left] == c) left++;
                        while(left<right && nums[right] == d) right--;
                    }else if(sum>target) right--;
                    else left++;
                }
            }
        }
        return res;
    }
};