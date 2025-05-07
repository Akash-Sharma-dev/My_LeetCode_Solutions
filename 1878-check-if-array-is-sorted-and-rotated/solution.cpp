class Solution {

public:

    bool check(vector<int>& nums) {

        int change = 0, n = nums.size(), i = 0;

        while(i<n){

            if(nums[i]>nums[(i+1)%n]){

                change++;

            }

            if(change>1){

                return false;

            }

            i++;

        }

        return true;

    }

};
