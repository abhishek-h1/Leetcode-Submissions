// class Solution {
// public:
//     bool dfs(vector<vector<int>>& grid1,vector<vector<int>>& grid2 ,int i, int j)
//     {
//         if(i<0 or j<0 or i>=grid2.size() or j>=grid2[0].size())
//             return true;
        
//         if(grid2[i][j]==0)
//             return true;
//         if(grid2[i][j]==1 and grid1[i][j]==0)
//             return false;
        
//         grid2[i][j]=0;
        
//         return dfs(grid1,grid2,i+1,j) and dfs(grid1,grid2,i-1,j) and dfs(grid1,grid2,i,j+1) and dfs(grid1,grid2,i,j-1);
//     }
//     int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//         ios_base::sync_with_stdio(0);
//         cin.tie(0);
//         cout.tie(0);
        
//         // vector<vector<int>> grid(grid1.size(),vector<int>(grid[0].size(),0));
//         // for(int i=0;i<grid1.size();i++)
//         // {
//         //     for(int j=0;j<grid1[0].size();j++)
//         //     {
//         //         grid1[i][j]+=grid2[i][j];
//         //     }
//         // }
//         int ans=0;
//          for(int i=0;i<grid1.size();i++)
//         {
//             for(int j=0;j<grid1[0].size();j++)
//             {
//                 if(grid2[i][j]==1)
//                 {
//                     if(dfs(grid1,grid2,i,j))
//                         ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j)
    {
        if(i<0 || i==grid2.size() || j<0 || j==grid2[0].size() || grid2[i][j]==0)
            return true;
    
        if(grid2[i][j]==1 && grid1[i][j]==0)
            return false;
        
        grid2[i][j]=0;
        
        bool up = dfs(grid1, grid2, i-1, j);
        bool down = dfs(grid1, grid2, i+1, j);
        bool left = dfs(grid1, grid2, i, j-1);
        bool right = dfs(grid1, grid2, i, j+1);
        
        return up && down && left && right;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {  
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(grid2.size()==0 || grid2[0].size()==0)
            return 0;
        
        int m = grid2.size();
        int n = grid2[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid2[i][j]==1)
                {
                    if(dfs(grid1, grid2, i, j))
                        count++;
                }
            }
        }
        return count;
    }
};