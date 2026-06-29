class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int og) {
        if((sr < 0 || sr>=image.size()) || (sc<0 || sc>= image[sr].size())) return;
        if(image[sr][sc] == og){
            image[sr][sc] = color;
            fill(image,sr-1,sc,color,og);
            fill(image,sr+1,sc,color,og);
            fill(image,sr,sc-1,color,og);
            fill(image,sr,sc+1,color,og);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        fill(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};