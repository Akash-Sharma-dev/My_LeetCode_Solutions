class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mpp;
        int left = 0,n = s.length(),count = 0, maxi = INT_MIN;
        if(n==0) return 0;
        for(int i = 0; i<n; i++){
            if(mpp.find(s[i]) != mpp.end() && mpp[s[i]] >= left){
                maxi = max(maxi,count);
                left = mpp[s[i]]+1;
                count = i - left;
            }
            count++,
            mpp[s[i]] = i;
        }
        return max(maxi, count);
    }
};