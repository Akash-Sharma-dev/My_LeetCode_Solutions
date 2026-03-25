class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0, j, n = nums.size();
        vector<int>res;
        while(i<n){
            j = nums[i]-1;
            if(j<n && nums[i] != nums[j]){
                swap(nums[i], nums[j]);
            }else{
                i++;
            }
        }

        for(int i = 0; i<n ; i++){
            if(nums[i] != i+1){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};