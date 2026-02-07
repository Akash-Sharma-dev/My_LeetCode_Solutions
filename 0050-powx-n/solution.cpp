class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(x==1) return 1;
        double pow = 1;
        if(n == INT_MIN){
            pow *= x;
            n++;
        }
        int p = abs(n);
        while(p){
            if(p%2 == 0){
                x *= x;
                p /= 2;
            }
            pow *= x;
            p--;
        }
        if(n<0) return 1/pow;
        return pow;
    }
};
