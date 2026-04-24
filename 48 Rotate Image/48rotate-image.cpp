class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i<n/2; i++){
            matrix[i].swap(matrix[n-i-1]);
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(j>i){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
    }
};