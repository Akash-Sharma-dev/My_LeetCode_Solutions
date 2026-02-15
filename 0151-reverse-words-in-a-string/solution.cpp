class Solution {
public:
    string reverseWords(string s) {
        string word = "", sent = "";
        int n = s.length(), i = n-1, j = 0;
        while(s[i] == ' ') i--;
        while(s[j] == ' ') j++;
        for(; i>=j; i--){
            if(s[i] == ' ' && s[i+1] != ' '){
                sent = sent + word + ' ';
                word = "";
            }
            if(s[i] == ' ') continue;
            word = s[i] + word;
        }
        return sent + word;
    }
};
