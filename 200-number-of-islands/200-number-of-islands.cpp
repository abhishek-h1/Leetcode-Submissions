class Solution {
public:
    
    void dfs(vector<vector<char>> &grid, int x, int y)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(x<0||y<0||x>=m||y>=n||grid[x][y]!='1')
            return;
        grid[x][y]='2';
        dfs(grid,x+1,y);
        dfs(grid,x-1,y);
        dfs(grid,x,y-1);
        dfs(grid,x,y+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        // vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(),false));
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};