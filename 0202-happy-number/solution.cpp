class Solution {
public:
    bool isHappy(int n) {
        int square=0,digit;
        unordered_map<int,int>mpp;
        while(1){
            digit = n%10;
            square+=digit*digit;
            n=n/10;  
            if(n==0){
                 if(mpp.find(square) != mpp.end()){
                    return 0;
                }
                mpp[square] = 1;
                if(square==1){
                    return 1;
                }
                n = square;
                square=0;
            }

        }
        return 1;
    }
};
