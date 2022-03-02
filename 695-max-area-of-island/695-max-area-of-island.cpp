class Solution {
public:
    int area;
    void dfs(vector<vector<int>>& grid, vector<vector<bool>> &check,int i,int j)
    {
        if(j<0||i<0 || j>=grid[0].size() || i>=grid.size() || check[i][j]==true ||grid[i][j]!=1)
            return;
        check[i][j]=true;
        grid[i][j]=2;
        area++;
        dfs(grid,check,i,j+1);
        dfs(grid,check,i,j-1);
        dfs(grid,check,i+1,j);
        dfs(grid,check,i-1,j);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<bool>> check(grid.size(),vector<bool>(grid[0].size(),false));

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1 && check[i][j]==false)
                {
                    // cout<<grid[i][j];
                    area=0;
                    dfs(grid,check,i,j);
                    ans=max(ans,area);
                }
            }
        }
        return ans;
        
    }
};
