class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0, consL = 0,n = s.length();
        for(int i = 0; i<n; i++){
            if(s[i] == 'A')
                countA++;
            if(s[i] == 'L')
                consL++;
            if(s[i] != 'L')
                consL = 0;
            if(countA > 1 || consL > 2)
                return false;
        }
        return true;
    }
};
