class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26);
        int left = 0, maxi = 0, n = s.length(), max_l = 0;
        for(int i = 0; i<n; i++){
            freq[s[i] - 'A']++;
            maxi = max(maxi, freq[s[i] - 'A']);
            if((i-left+1) - maxi > k){
                freq[s[left]- 'A']--;
                left++;
            }else{
                max_l = max(max_l, i - left+1);
            }
        }
        return max_l;
    }
};