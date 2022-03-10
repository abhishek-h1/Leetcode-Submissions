class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<bool>& check, int src)
    {
        check[src]=true;
        for(int i=0;i<grid.size();i++)
        {
            if(grid[src][i]==1 and !check[i])
                dfs(grid,check,i);
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        int ans = 0;
        vector<bool> check(grid.size(),false);
        
        for(int i=0;i<grid.size();i++)
        {
            if(!check[i])
            {
                ans++;
                dfs(grid,check,i);
            }
        }
        return ans;
    }
};