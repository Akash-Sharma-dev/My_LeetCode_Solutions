class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans = {-1, -1};
        int l = 0, r = numbers.size()-1, sum = 0;

        while(l<r){
            sum = numbers[l] + numbers[r];
            if(sum < target){
                l++;
            }else if(sum > target){
                r--;
            }else{
                ans[0] = l+1;
                ans[1] = r+1;
                return ans;
            }
        }

        return ans;
    }
};
