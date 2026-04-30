class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), left = 0, right = n-1,h=0,w=0,area = 0, max_area = 0;
        while(left<right){
            h = min(height[left], height[right]);
            w = right - left;
            area = h*w;
            if(h==height[left]){
                left++;
            }else{
                right--;
            }
            max_area = max(max_area, area);
        }
        return max_area;
    }
};