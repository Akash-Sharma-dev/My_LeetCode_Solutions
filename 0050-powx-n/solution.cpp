class Solution {
public:
    double myPow(double x, int n) {
        long p = n;
        bool flag = false;
        double pow = 1;
        if(n==INT_MIN){
            pow *= x;
            n++;
        }
        if(n<0){
            flag = true;
            p = abs(n);
        }
        while(p){
            while(p%2==0){
                x *= x;
                p /= 2.00;
            }
            pow *= x;
            p--;
        }
        if(flag) return 1/pow;
        cout<<"hi";
        return pow;
    }
};
