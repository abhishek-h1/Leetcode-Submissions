class Solution {
    private:
    vector<int>x{1,-1,0,0,1,1,-1,-1};
    vector<int>y{0,0,1,-1,1,-1,1,-1};
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 or grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        
        while(!q.empty())
        {
            int cx=q.front().first;
            int cy=q.front().second;
            q.pop();
            for(int i=0;i<8;i++)
            {
                int nx=cx+x[i];
                int ny=cy+y[i];
                
                if(nx<0 or ny<0 or nx>=n or ny>=n or grid[nx][ny]!=0)
                    continue;
                q.push({nx,ny});
                grid[nx][ny]=grid[cx][cy]+1;
            }
        }
        
        
        if(grid[n-1][n-1]!=0)
            return grid[n-1][n-1];
        return -1;
    }
};