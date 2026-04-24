class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int x = 0, y = 0, x_step = 1, y_step = 1;
        vector<int>res;
        bool flag = false;
        while(1){
            flag = true;      
            while((y>=0 && y<m) && matrix[x][y] != 101){
                res.push_back(matrix[x][y]);
                matrix[x][y] = 101;
                y += y_step;
                flag = false;
            }
            y = y - y_step;
            y_step *= -1;
            x += x_step;
            while((x>=0 && x<n) && matrix[x][y] != 101){
                res.push_back(matrix[x][y]);
                matrix[x][y] = 101;
                x += x_step;
                flag = false;
            }
            x = x - x_step;
            x_step *= -1;
            y += y_step;
            if(flag) break;
        }
        return res;
    }
};