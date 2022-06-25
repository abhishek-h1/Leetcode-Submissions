class Solution {
    
public:
    
    void dfs(vector<vector<int>> & grid, int r, int c, int n)
    {
        if(r<0 or c<0 or r>=n or c>=n or grid[r][c]!=1)
            return;
        grid[r][c]=2;
        
        dfs(grid,r-1,c,n);
        dfs(grid,r+1,c,n);
        dfs(grid,r,c-1,n);
        dfs(grid,r,c+1,n);
    }
    
    int x[4]={1,-1,0,0};
    int y[4]={0,0,-1,1};
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        bool flag=false;
        
        
        
       
        
        
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 and !flag)
                {
                    dfs(grid,i,j,n);
                    flag=true;
                }
                else if(grid[i][j]==1 and flag)
                {
                    q.push({i,j});
                }
            }
        }
        
       
        int ans=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            
            while(sz--)
            {
                  int cx=q.front().first;
                int cy=q.front().second;
                q.pop();
                
                for(int i=0;i<4;i++)
                {
                    int nx=cx+x[i];
                    int ny=cy+y[i];

                    if(nx<0 or ny<0 or nx>=n or ny>=n)
                        continue;
                    if(grid[nx][ny]==2)
                        return ans;
                    else if(grid[nx][ny]==0)
                    {
                        q.push({nx,ny});
                        grid[nx][ny]=1;
                    }
                }
                 
            }
            ans++;
            
        }
        return -1;
        
    }
};