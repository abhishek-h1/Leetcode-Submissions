class Solution {
public:
    
    vector<int>x={0,0,1,-1,1,-1,1,-1};
    vector<int>y={1,-1,0,0,1,-1,-1,1};
    
    bool safe(int i,int j,int n)
    {
        if(i<0||j<0||i>=n||j>=n)
            return false;
        return true;
    }
    
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>>q;
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        
        q.push({0,0});
        vis[0][0]=true;
        grid[0][0]=1;
        while(!q.empty())
        {
            int s = q.size();
            
            
                int cx = q.front().first;
                int cy = q.front().second;
                q.pop();
                
                
                for(int i=0;i<8;i++)
                {
                    int nx = cx + x[i];
                    int ny = cy + y[i];
                    // cout<<nx<<" "<<ny<<endl;
                    if(safe(nx,ny,n) and !vis[nx][ny] and grid[nx][ny]==0)
                    {
                        grid[nx][ny]=grid[cx][cy]+1;
                        // cout<<grid[nx][ny]<<endl;
                        q.push({nx,ny});
                        vis[nx][ny]=true;
                    }
                }
        }
        return (grid[n-1][n-1]<=0)? -1:grid[n-1][n-1];
    }
};