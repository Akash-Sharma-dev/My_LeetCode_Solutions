class Solution {
public:
    vector<int> calc_lps(string s){
        int n = s.length(),j = 0;
        vector<int>lps(n,0);
        for(int i = 1; i<n;){
            if(s[i] == s[j]){
                j++;
                lps[i++] = j;
            }else if(j!=0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
        return lps;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int m = word.length();
        int n = patterns.size();
        int count = 0;
        vector<int>lps;
        /*for(int i = 0; i<lps.size(); i++){
            cout<<lps[i]<<" ";
        }
        return 0;*/
        for(int i = 0; i<n; i++){
            int x = 0;
            lps = calc_lps(patterns[i]);
            for(int j = 0; j<m;){
                if(word[j] == patterns[i][x]){
                    j++;
                    x++;
                }else if(x==0){
                    j++;
                }else{
                    x = lps[x-1];
                }
              if(x==patterns[i].length()){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};