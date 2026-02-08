class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(),l = 0, r = n-1,area,max_area = 0;

        while(l<r){
            area = (r-l) * min(height[l], height[r]);
            max_area = max(max_area, area);
            if(height[l]>height[r]){
                r--;
            }else if(height[r]>height[l]){
                l++;
            }else{
                l++;
                r--;
            }
        }
        return max_area;
    }
};
