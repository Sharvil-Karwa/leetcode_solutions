class Solution {
public:
    void dfs(vector<vector<int>> &img,int sr,int sc,int newColor,int rows,int cols, int source){
        if(sr<0 || sr>=rows || sc<0 || sc>=cols) return;
        if(img[sr][sc]!=source) return;
        img[sr][sc] = newColor;
        dfs(img,sr+1,sc,newColor,rows,cols,source);
        dfs(img,sr-1,sc,newColor,rows,cols,source);
        dfs(img,sr,sc+1,newColor,rows,cols,source);
        dfs(img,sr,sc-1,newColor,rows,cols,source);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int newColor) {
        if(newColor==img[sr][sc]) return img;
        int rows = img.size();
        int cols = img[0].size();
        int source = img[sr][sc];
        dfs(img,sr,sc,newColor,rows,cols,source);
        return img;
    }
};