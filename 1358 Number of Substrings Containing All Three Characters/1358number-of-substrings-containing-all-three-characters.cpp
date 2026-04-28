class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length(), count = 0, left = 0;
        vector<int>freq(3,0);
        for(int i = 0; i<n;i++){
            freq[s[i] - 'a']++;
            while(freq[0] >= 1 && freq[1] >= 1 && freq[2] >= 1){
                count += (n - i);
                freq[s[left] - 'a']--;
                left++;
            }
        }
        return count;
    }
};