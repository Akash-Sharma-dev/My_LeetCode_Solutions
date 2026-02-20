class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0, high = 0,n = nums.size(),count = 0, max_c = 0;
        int x = k;
        for(int i = 0; i<n; i++){
            
            if(nums[i]==0 && x<=0 && k){
                int start = i-count;
                if(nums[start]==0){
                    count--;
                    x++;
                }else{
                    while(nums[start] != 0){
                        count--;
                        start++;
                    }
                    count--;
                    x++;
                }
            }
            if(nums[i] == 1 || x>0){
                count++;
            }
            if(count>max_c){
                max_c = count;
            }
            if(k==0 && nums[i] == 0){
                count = 0;
            }
            if(nums[i] == 0){
                x--;
            }
        }
        return max_c;
    }
};
