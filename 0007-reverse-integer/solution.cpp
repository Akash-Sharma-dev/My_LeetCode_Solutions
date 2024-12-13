class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN){
                    return 0;
                        }
                            int digit;
                                long int i=1;
                                    int reversed_num=0;
                                        bool isNegative = (x<0);
                                            if(isNegative){
                                                    x=-x;
                                                        }
                                                            do{
                                                                    i*=10;
                                                                            digit = (x%i-x%(i/10))/(i/10);
                                                                                    if (reversed_num > (INT_MAX / 10) || (reversed_num == (INT_MAX / 10) && digit > INT_MAX % 10)) {
                                                                                                return 0;
                                                                                                        }
                                                                                                                reversed_num = reversed_num*10 + digit;
                                                                                                                    }while(int(x/i)!=0);
                                                                                                                        if(isNegative){
                                                                                                                                reversed_num = -reversed_num;
                                                                                                                                    }
                                                                                                                                        return reversed_num;
        }
    
};
