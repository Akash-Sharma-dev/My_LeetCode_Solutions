class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),maxi = 0, max_i = n-1,water = 0, total = 0,left = 0, right = n-1;

        for(int i = 0; i<n; i++){
            if(height[i] > maxi){
                maxi = height[i];
                max_i = i;
            }
        }
        while(left < max_i){
            int j = left+1;
            while(height[j] < height[left]){
                water  = height[left] - height[j];
                total += water;
                j++;
            }
            left = j;
        }
        while(right > max_i){
            int j = right-1;
            while(height[j] < height[right]){
                water  = height[right] - height[j];
                total += water;
                j--;
            }
            right = j;
        }
        
        return total;
    }
};
