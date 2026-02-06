class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size(),i = 1, mini = nums[0], maxi = 0, gcd = 1;
        for(int i = 0; i<n; i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        int low = min(mini,maxi);
        while(i<=low){
            if(mini%i == 0 && maxi%i == 0){
                gcd = max(gcd, i);
                
            }
            i++;
        }
        return gcd;
    }
};
