class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mpp;
        vector<string> res;
        string ten;
        int n = s.length();
        for(int i = 0;i<=n-10;i++){
          ten = s.substr(i,10);
          mpp[ten]++;
          if(mpp[ten]==2) res.push_back(ten);
        }
        return res;
    }
};
