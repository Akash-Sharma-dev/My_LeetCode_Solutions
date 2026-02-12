class Solution {
public:
    int trailingZeroes(int n) {
        int fact = 1,fivem = 0;
        while(n){
            int x = n;
            while(x%5 == 0){
                fivem++;
                x /= 5;
            }
            n--;
        }
        return fivem;
    }
};
