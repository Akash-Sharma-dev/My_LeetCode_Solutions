class Solution {
public:
    int factorial(int n){
        int fact=1;
        while(n){
            fact *= n;
            n--;
        }
        return fact;
    }
    string getPermutation(int n, int k) {
        vector<char>num(n);

        for(int i = 0; i<n; i++){
            num[i] = '0'+i+1;
        }
        int x = n;
        k = k-1;
        string kth = "";
        while(x--){
            int fact = factorial(x);
            kth += num[k/fact];
            num.erase(num.begin() + k/fact);
            k = k%fact;
        }
        return kth;
    }
};