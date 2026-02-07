class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0, h = 0, n = gain.size();
        for(int i = 0; i<n; i++){
            h += gain[i];
            if(h>alt) alt = h;
        }
        return alt;
    }
};
