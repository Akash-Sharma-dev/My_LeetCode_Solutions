class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        int n = 0;

        for(int i = 0; i<numRows; i++){
            n++;
            pascal[i] = vector<int>(n);
            pascal[i][0] = 1;
            pascal[i][n-1] = 1;
            for(int j = 1; j<n-1; j++){
                pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
        return pascal;
    }
};
