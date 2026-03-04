class Solution {
public:
    int lastRemaining(int n) {
        int g = 1, l = 1,  r = n, i = 1;

        while(l!=r){
            if(n%2){
                l = l+g;
                r = r-g;
            }else{
                if(i%2){
                    l = l+g;
                }else{
                    r = r-g;
                }
            }
            g *= 2;
            n /= 2;
            i++;
        }
        return r;
    }
};