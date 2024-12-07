class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>CHI;
        int maxLength = 0;
        int start = 0;
        for(int i = 0;i<s.length();i++){
            char ai = s[i];
            if(CHI.find(ai) != CHI.end() && CHI[ai]>=start){
                start = CHI[ai]+1;
            }
            CHI[ai] = i;
            maxLength = max(maxLength,i-start+1);
        }
        return maxLength;
    }
};
