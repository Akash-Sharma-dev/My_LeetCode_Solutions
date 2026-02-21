class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool alpha[26];
        int n = sentence.length();

        for(int i = 0; i<n; i++){
            alpha[sentence[i] - 'a'] = true;
        }
        for(int i = 0; i<26; i++){
            if(alpha[i] == false){
                return false;
            }
        }
        return true;
    }
};
