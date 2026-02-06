class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        while(n){
            int digit = n%10;
            n /= 10;
            sum += digit;
            product *= digit;
        }
        return product - sum;
    }
};
