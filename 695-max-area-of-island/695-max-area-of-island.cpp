class Solution {
public:
    int dfs(vector<vector<int>>&grid, int r, int c)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(r<0 or c<0 or r>=m or c>=n or grid[r][c]!=1)
            return 0;
        grid[r][c]=2;
        return (1+ dfs(grid,r-1,c)+dfs(grid,r+1,c)+dfs(grid,r,c-1)+dfs(grid,r,c+1));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    ans=max(ans,dfs(grid,i,j));
            }
        }
        return ans;
        
    }
};