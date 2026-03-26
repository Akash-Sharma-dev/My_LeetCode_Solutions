class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size(), sum = 0, maxi = 0, start = 0;
        unordered_map<int,int>mpp;
        cout<<"N : "<<n<<endl;
        for(int i = 0; i<n; i++){  
            if(mpp[nums[i]] != 0){
                sum = 0;
                start = mpp[nums[i]];
                i = mpp[nums[i]];
                mpp.clear();
            }
            mpp[nums[i]] = i+1;
            sum += nums[i];
            if(i-start+1==k){
                maxi = max(maxi, sum);
                sum -= nums[start];
                mpp[nums[start]] = 0;
                start++;
            }
        }
        return maxi;
    }
};