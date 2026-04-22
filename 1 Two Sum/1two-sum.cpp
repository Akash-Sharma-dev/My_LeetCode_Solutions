class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>value_ind;
        int n = nums.size(),start = 0, end = n-1, sum = 0;

        for(int i = 0; i<n; i++){
            value_ind.push_back({nums[i],i});
        }

        sort(value_ind.begin(),value_ind.end());

        while(start<end){
            sum = value_ind[start].first + value_ind[end].first;

            if(sum == target) return {value_ind[start].second, value_ind[end].second};
            else if(sum < target) start++;
            else end--;
        }
        return {-1, -1};
        
    }
};