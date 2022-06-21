class Solution {
private:
    vector<int>x{0,0,-1,1};
    vector<int>y{-1,1,0,0};
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
            }
        }
        if(q.size() == n*n or q.size()==0)
            return -1;
        int ans=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            ans++;
            while(sz--)
            {
                int cx=q.front().first;
                int cy=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nx=cx+x[i];
                    int ny=cy+y[i];
                    
                    if(nx>=0 and ny>=0 and nx<n and ny<n and grid[nx][ny]==0)
                    {
                        q.push({nx,ny});
                        grid[nx][ny]=1;
                    }
                }
            }
        }
        ans--;
        return ans? ans:-1;
    }
};