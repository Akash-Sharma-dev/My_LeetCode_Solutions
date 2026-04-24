class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(), cand1 = INT_MIN, cand2 = INT_MIN, vote1 = 0, vote2 = 0;
        vector<int>res;
        for(int i = 0; i<n; i++){
            if(vote1 == 0 && nums[i] != cand2){
                cand1 = nums[i];
                vote1++;
            }else if(vote2 == 0 && nums[i] != cand1){
                cand2 = nums[i];
                vote2++;
            }else if(nums[i] == cand1){
                vote1++;
            }else if(nums[i] == cand2){
                vote2++;
            }else{
                vote1--;
                vote2--;
            }
        }

        vote1 = 0;
        vote2 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == cand1){
                vote1++;
            }
            if(nums[i] == cand2){
                vote2++;
            }
        }
        int mini = n/3 + 1;
        if(vote1>=mini) res.push_back(cand1);
        if(vote2>=mini) res.push_back(cand2);

        return res;
    }
};