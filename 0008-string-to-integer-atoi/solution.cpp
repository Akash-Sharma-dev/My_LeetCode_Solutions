class Solution {
public:
    int myAtoi(string s) {
       int num=0;
           int i = 0;
               int sign = 1;
                   int digit;
                       while(s[i]==' '){
                               i++;
                                       continue;
                                           }
                                               if(s[i]=='-'){
                                                       sign = -1;
                                                               i++;
                                                                   }else if(s[i]=='+'){
                                                                           i++;
                                                                               }
                                                                                   while(s[i]!='\0'){
                                                                                           if(isdigit(s[i])){
                                                                                                       digit = s[i]-'0';
                                                                                                                   if(num>(INT_MAX-digit)/10){
                                                                                                                                    return (sign==1)?INT_MAX:INT_MIN;
                                                                                                                                                }
                                                                                                                                                            num = num*10 + digit;
                                                                                                                                                                    }else{
                                                                                                                                                                                break;
                                                                                                                                                                                        }
                                                                                                                                                                                                i++;
                                                                                                                                                                                                    }
                                                                                                                                                                                                        return sign*num; 
    }
};
