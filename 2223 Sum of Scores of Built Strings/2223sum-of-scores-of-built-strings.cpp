class Solution {
public:
    vector<int> zarray(string s){
        int n = s.length();
        vector<int>z(n,0);
        int l = 0, r = 0, j = 0;
        for(int i = 1; i<n; i++){
            if(i>r){
                j = 0;
                while(j+i<n && s[i+j] == s[j]){
                    j++;
                }
                z[i] = j;
                l = i;
                r = j+i-1;
            }else{
                int x = i - l;
                int rem = r - i + 1;

                if(z[x] < rem){
                    z[i] = z[x];
                }else{
                    l = i;
                    while(r+1<n && s[r+1] == s[rem]){
                        rem++;
                        r++;
                    }
                    z[i] = rem;
                }
            }
        }
        return z;
    }
    long long sumScores(string s) {
        vector<int>z = zarray(s);
        return accumulate(z.begin(), z.end(), s.length());
    }
};