class Solution {
public:
    bool isPalindrome(string st){
        int left = 0;
        int right = st.length()-1;     
        while(left<right){
            if(st[left] != st[right]){
                return false;
            }
            left++;
            right--;
        } 
        return true; 
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            if(s[left] == s[right]){
                left++;
                right--;
            }else{
                return isPalindrome(s.substr(0,left) + s.substr(left+1)) || isPalindrome(s.substr(0,right) + s.substr(right+1));
            }
        }
        return true;
    }
};
