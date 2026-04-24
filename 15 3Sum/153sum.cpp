class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(),a,b,c,sum=0;
        sort(nums.begin(),nums.end());
        int first = 0, last = n-1;
        vector<vector<int>>res;
        for(int i = 0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            a = nums[i];
            first = i+1;
            last = n-1;
            while(first<last){
                b = nums[first];
                c = nums[last];
                sum = a + b + c;
                if(sum==0){
                    res.push_back({a,b,c});
                    while(first<last && nums[first] == b && nums[last] == c){
                        first++;
                        last--;
                    }
                }else if(sum>0) last--;
                else first++;
            }
        }
        return res;
    }
};