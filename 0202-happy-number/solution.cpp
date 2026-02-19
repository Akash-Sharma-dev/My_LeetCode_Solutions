class Solution {
public:
int sum_sq(int n){
    int sum = 0, digit = 0;
    while(n){
        digit = n%10;
        n /= 10;
        sum += (digit*digit);
    }
    return sum;
}
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            slow = sum_sq(slow);
            fast = sum_sq(sum_sq(fast));
        }while(slow!=fast);
        return fast==1;
    }
};
