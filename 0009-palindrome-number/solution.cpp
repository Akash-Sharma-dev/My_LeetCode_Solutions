class Solution {
public:
    long reverse(int x, long rev = 0){
        if(x==0) return rev;
        rev = rev*10 + x%10;
        return reverse(x/10,rev);
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        return x == reverse(x);
    }
};
