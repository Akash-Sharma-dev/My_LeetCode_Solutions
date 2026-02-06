class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num = x, digit, rev = 0, maxi = INT_MAX;
        while(num){
            digit = num%10;
            num /= 10;
            if(rev > maxi/10 || (rev == maxi/10 && digit > maxi%10)){
                return false;
            }
            rev = rev * 10 + digit;
        }
        return !(x - rev);
    }
};
