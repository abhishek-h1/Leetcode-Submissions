class Solution {
public:
    int x[4]={0,0,-1,1};
    int y[4]={-1,1,0,0};
    bool dfs(vector<vector<int>> & grid1, vector<vector<int>>& grid2, int r, int c)
    {
        if(grid1[r][c]!=grid2[r][c])
            return false;
        
        grid1[r][c]=grid2[r][c]=2;
        
        bool check=true;
        
        for(int i=0;i<4;i++)
        {
            int nx=r+x[i];
            int ny=c+y[i];
            
            if(nx>=0 and ny>=0 and nx<grid1.size() and ny<grid1[0].size())
            {
                if(grid2[nx][ny]==1 and dfs(grid1,grid2,nx,ny)==false)
                    check=false;
            }
        }
        return check;
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int ans=0;
        for(int i=0;i<grid2.size();i++)
        {
            for(int j=0;j<grid1[0].size();j++)
            {
                if(grid1[i][j]==1 and grid2[i][j]==1)
                    if(dfs(grid1,grid2,i,j))
                        ans++;
            }
        }
        return ans;
    }
};