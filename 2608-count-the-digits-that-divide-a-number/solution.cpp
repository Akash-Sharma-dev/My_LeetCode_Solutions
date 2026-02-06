class Solution {
public:
    int countDigits(int num) {
        int x = num, count = 0;
        while(x){
            int digit = x % 10;
            x /= 10;
            if(!(num%digit)) count++;
        }
        return count;
    }
};
