class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size(), count = 0;
        for(int i = 0; i<n; i++){
            int x = i;

            while(x+1<n && intervals[i][0] == intervals[x+1][0]){
                x++;
            }
            i=x;
            while(x+1<n && intervals[i][1] >= intervals[x+1][1]){
                x++;
            }
            i = x;
            count++;
        }
        return count;
    }
};