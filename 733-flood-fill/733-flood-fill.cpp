class Solution {
public:
    void dfs(vector<vector<int>>&image,int r,int c, int n, int col)
    {
        if(image[r][c] == col)
        {
            image[r][c]=n;
            if(r>=1)
                dfs(image,r-1,c,n,col);
            if(c>=1)
                dfs(image,r,c-1,n,col);
            if(r<image.size()-1)
                dfs(image,r+1,c,n,col);
            if(c<image[0].size()-1)
                dfs(image,r,c+1,n,col);
        }
            
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor != image[sr][sc])
            dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};