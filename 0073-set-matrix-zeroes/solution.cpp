class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        unordered_set<int>row;
        unordered_set<int>col;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(row.find(i) != row.end() || col.find(j) != col.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
