class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(), left = 0, maxi = 0, dif = 0;
        unordered_map<int,int>mpp;
        for(int i = 0; i<n; i++){
            if(mpp[fruits[i]] == 0) dif++;
            mpp[fruits[i]]++;
            if(dif>2){
                mpp[fruits[left]]--;
                if(mpp[fruits[left]]==0){
                    dif--;
                }
                left++;
            }
            maxi = max(maxi, i - left + 1);
        }
        return maxi;
    }
};