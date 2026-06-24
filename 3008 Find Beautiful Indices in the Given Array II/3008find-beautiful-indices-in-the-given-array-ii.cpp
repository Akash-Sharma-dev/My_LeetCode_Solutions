class Solution {
public:
    vector<int> zarray(string s){
        int n = s.length();
        vector<int>z(n,0);
        int j = 0;
        int l = 0, r = 0;
        for(int i = 1; i<n;){
            if(i<l || i>r){
                int j = 0;
                while(i+j < n && s[j] == s[i+j]){
                    j++;
                }
                z[i] = j;
                l = i;
                r = i+j-1;
                i++;
            }
            else{
                int x  = i - l;
                int rem = r - i + 1;

                if(z[x] < rem){
                    z[i] = z[x];
                    
                }else{
                    l = i;
                    z[i] = rem;
                    while(r+1 < n && s[rem] == s[r+1]){
                        r += 1;
                        rem++;
                    }
                    z[i] = rem;
                }
                i++;
            }
        }
            return z;
    }
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        string as = a + '#' + s;
        string bs = b + '#' + s;
        vector<int>z1 = zarray(as);
        vector<int>z2 = zarray(bs);
        vector<int>ans;
        int an = a.length();
        int bn = b.length();
        int n = s.length();
        vector<int>aZ;
        vector<int>bZ;
        for(int x = 0; x<n; x++){
            if(z1[x+an+1] == an){
                aZ.push_back(x);
            }
            if(z2[x+bn+1] == bn){
                bZ.push_back(x);
            }
        }
        int j = 0;
        for(int i = 0; i<aZ.size(); i++){
            while(j<bZ.size() && bZ[j]<aZ[i]-k){
                j++;
            }
            if(j<bZ.size() && bZ[j]<=aZ[i]+k){
                ans.push_back(aZ[i]);
            }
        }
        return ans;
    }
};