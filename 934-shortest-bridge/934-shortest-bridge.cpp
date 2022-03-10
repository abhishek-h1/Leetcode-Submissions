class Solution {
public:
    vector<int> x = {0,0,-1,1};
    vector<int> y = {1,-1,0,0};
    
    
    bool safe(int i,  int j, int n)
    {
        if(i>=0 and j>=0 and i<n and j<n)
            return true;
        return false;
    }
    
    void paint(vector<vector<int>>& grid, queue<pair<int,int>>& q, int i, int j)
    {
        int n = grid.size();
        if(safe(i,j,n) and grid[i][j]==1)
        {
            grid[i][j]=2;
            q.push({i,j});
            for(int k=0;k<4;k++)
            {
                paint(grid,q,i+x[k],j+y[k]);
            }
        }
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        
        queue<pair<int,int>>q;
        
        int n = grid.size();
        
        
        
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    paint(grid,q,i,j);
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        
        // cout<<q.size()<<" ";
        
        while(!q.empty())
        {
            int cx = q.front().first;
            int cy = q.front().second;
            
            q.pop();
            
            for(int i =0;i<4;i++)
            {
                int nx = cx+x[i];
                int ny = cy+y[i];
                
                if(safe(nx,ny,n))
                {
                    if(grid[nx][ny]==1)
                    {
                        cout<<nx<<" "<<ny;
                        return grid[cx][cy]-2;
                        
                    }
                        
                    if(grid[nx][ny]==0)
                    {
                        cout<<grid[cx][cy]<<" ";
                        grid[nx][ny]=grid[cx][cy]+1;
                        q.push({nx,ny});
                    }
                }
                
            }
            
        }
        return 0;
        
        
    }
};