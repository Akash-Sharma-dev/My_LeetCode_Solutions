class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length();
        int m = s.length();
        int i = 0, j=0;
        while(i<n && j<m){
            if(s[j] == t[i]){
                j++;
            }
            i++;
        }
        if(j==m) return true;
        return false;
    }
};