class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0, longest = n, end,i,j;
        while(longest){
            for(start = 0, end = longest-1; end<n; start++, end++ ){
                i = start, j = end;
                while(i<j){
                    if(s[i] != s[j]){
                        break;
                    }
                    i++;
                    j--;
                }
                if(i>=j){
                    return s.substr(start, longest);
                }
            }
            longest--;
        }
        return "";
    }
};
