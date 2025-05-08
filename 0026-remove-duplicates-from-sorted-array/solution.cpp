class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> digit;
        vector<int> unique;
        int n = nums.size();
        int x = 0;
        for(int i = 0;i<n;i++){
            digit[nums[i]] += 1;
            if(digit[nums[i]] == 1){                nums[x] = nums[i];
               x++;
            }
            
        }
        return x;
    }
};
