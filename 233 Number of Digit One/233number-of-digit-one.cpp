class Solution {
public:
    int countDigitOne(int n) {
        int ten = 1, one = 0,rem=0,x=n;
        while(x){
            one += (n/ten)*(ten/10);
            int digit = x%10;
            if(digit>=2){
                one += ten;
            }else if(digit==1){
                one += rem+1;
            }
            rem += digit*ten;
            if(ten==1000000000) break;
            ten *= 10;
            x /= 10;
        }
        return one;
    }
};