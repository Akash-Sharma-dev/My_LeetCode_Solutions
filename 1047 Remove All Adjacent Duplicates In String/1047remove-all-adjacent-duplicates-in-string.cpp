class Solution {
public:
    string removeDuplicates(string s) {
       vector<char>st;
       int n = s.length();
       for(int i = 0; i<n; i++){
        if(!st.empty() && s[i] == st.back()){
            st.pop_back();
        }else{
            st.push_back(s[i]);
        }
       }
       string temp = "";
       for(int i = 0; i<st.size(); i++){
        temp += st[i];
       }
       return temp;
    }
};