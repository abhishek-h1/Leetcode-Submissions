class Solution {
public:
    
    void dfs(vector<vector<int>> &mat, int r, int c,int prev, vector<vector<bool>>&ocean)
    {
        int m=mat.size();
        int n=mat[0].size();
        
        if(r<0 or c<0 or r>=m or c>=n)
            return;
        if(ocean[r][c])
            return;
        if(mat[r][c]<prev)
            return;
        ocean[r][c]=true;
        
        dfs(mat,r+1,c,mat[r][c],ocean);
        dfs(mat,r-1,c,mat[r][c],ocean);
        dfs(mat,r,c+1,mat[r][c],ocean);
        dfs(mat,r,c-1,mat[r][c],ocean);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n,false));
        vector<vector<bool>> atlantic(m, vector<bool>(n,false));
        
        
        for(int i=0;i<m;i++)
        {
            dfs(heights,i,0,INT_MIN,pacific);
            dfs(heights,i,n-1,INT_MIN,atlantic);
        }
        
        
        for(int i=0;i<n;i++)
        {
            dfs(heights,0,i,INT_MIN,pacific);
            dfs(heights,m-1,i,INT_MIN,atlantic);
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};