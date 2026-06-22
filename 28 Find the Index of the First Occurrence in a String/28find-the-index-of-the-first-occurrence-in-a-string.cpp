class Solution {
public:
    vector<int> compute_lps(string s){
        int n = s.length();
        vector<int> lps(n,0);
        int len = 0;
        for(int i = 1; i<n;){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++;
            }else if(len!=0){
                len = lps[len-1];
            }else{
                i++;
            }
        }
        return lps;
    }
    int strStr(string haystack, string needle) {
        vector<int>lps = compute_lps(needle);
        int j = 0;
        int n = haystack.length();
        int m = needle.length();
        for(int i = 0; i<n; i++){
            if(haystack[i] == needle[j]){
                j++;
            }else if(j){
                j = lps[j-1];
                i--;
            }
            if(j>=m){
                return i - j + 1;
            }
        }
        return -1;
    }
};