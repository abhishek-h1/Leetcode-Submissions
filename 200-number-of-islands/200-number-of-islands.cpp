class Solution {
public:
    
    void dfs(vector<vector<char>> &grid, vector<vector<bool>> &check, int i, int j)
    {
        if(i<0||i>=grid.size() || j<0||j>=grid[i].size() || check[i][j]==true || grid[i][j]=='0')
            return;
        check[i][j]=true;
        
        dfs(grid,check,i,j+1);
        dfs(grid,check,i,j-1);
        dfs(grid,check,i+1,j);
        dfs(grid,check,i-1,j);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vector<vector<bool>> check(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1' && check[i][j]==false)
                {
                    dfs(grid,check,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};