class Solution {
public:
    int trap(vector<int>& height) {
        int high = 0, maxi = 0, idx = 0, n = height.size();

        for(int i = 0; i<n; i++){
            if(height[i] > maxi){
                maxi = height[i];
                idx = i;
            }
        }

        int left = 0, right = n-1, cur_maxh = 0, area = 0;

        while(left<idx){
            cur_maxh = max(cur_maxh, height[left]);
            area += (cur_maxh - height[left]);
            left++;
        }
        cur_maxh = 0;
        while(right>idx){
            cur_maxh = max(cur_maxh, height[right]);
            area += (cur_maxh - height[right]);
            right--;
        }
        return area;
    }
};