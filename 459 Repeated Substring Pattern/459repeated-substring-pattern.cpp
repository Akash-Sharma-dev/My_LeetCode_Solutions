class Solution {
public:
    vector<int> compute_lps(string s){
        int len = 0;
        int n = s.length();
        vector<int>lps(n,0);
        for(int i =1; i<n;){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++;
            }else if(len != 0){
                len = lps[len-1];
            }else{
                i++;
            }
        }
        return lps;
    }
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        vector<int>lps = compute_lps(s);
        int rlen = n - lps[n-1];
        if(rlen==n) return false;
        return !(n%rlen);
    }
};