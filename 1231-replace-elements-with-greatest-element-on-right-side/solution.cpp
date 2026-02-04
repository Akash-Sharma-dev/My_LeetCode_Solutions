class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int cur = 0, max_r = -1;
        int n = arr.size();
        for(int i = n-1; i>=0; i--){
           cur = arr[i];
           arr[i] = max_r;
           max_r = max(max_r, cur);
        }
        return arr;
    }
};
