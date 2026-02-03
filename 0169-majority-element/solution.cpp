class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = nums[0];
        int vote = 0;

        for(int i =0; i<n; i++)
        {
            if(vote == 0){
                candidate = nums[i];
            }
            if(candidate == nums[i]){
                vote++;
            }else{
                vote--;
            }
        }
        return candidate;
    }
};
