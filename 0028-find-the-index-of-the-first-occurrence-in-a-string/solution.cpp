class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();

        for(int i = 0; i<n; i++){
            string s = haystack.substr(i,m);
            if(s == needle){
                return i;
            }
        }
        cout<<haystack.substr(1,3);
        return -1;
    }
};
