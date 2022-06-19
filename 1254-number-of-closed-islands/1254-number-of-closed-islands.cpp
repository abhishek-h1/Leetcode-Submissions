class Solution {
public:
    void dfs(vector<vector<int>>&grid, int r, int c)
    {
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or grid[r][c]!=0)
            return;
        grid[r][c]=2;
        
        dfs(grid,r-1,c);
        dfs(grid,r+1,c);
        dfs(grid,r,c-1);
        dfs(grid,r,c+1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if((i*j==0 or i==grid.size()-1 or j==grid[i].size()-1) and grid[i][j]==0)
                    dfs(grid,i,j);
            }
        }
        
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0)
                {
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};