class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 1, sum = 0;
        long long res = 0;

        while(n){
            int digit = n%10;
            n /= 10;
            if(digit){
                sum += digit;
                res += (digit*x);
                x *= 10;
            }
        }
        return res * sum;
    }
};