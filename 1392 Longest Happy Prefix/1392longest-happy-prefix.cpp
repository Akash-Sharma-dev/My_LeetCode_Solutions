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
    string longestPrefix(string s) {
        vector<int>lps = compute_lps(s);
        int n = lps.size();
        return s.substr(0,lps[n-1]);
    }
};