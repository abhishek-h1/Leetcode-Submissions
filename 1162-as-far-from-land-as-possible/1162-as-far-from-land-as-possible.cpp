class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
            }
        }
        int ans=0;
        while(!q.empty())
        {
            ans++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                
                if(r>0 && grid[r-1][c]==0)
                {
                    grid[r-1][c]=1;
                    q.push({r-1,c});
                }
                if(c>0 && grid[r][c-1]==0)
                {
                    grid[r][c-1]=1;
                    q.push({r,c-1});
                }
                if(r+1<grid.size() && grid[r+1][c]==0)
                {
                    grid[r+1][c]=1;
                    q.push({r+1,c});
                }
                if(c+1<grid[0].size() && grid[r][c+1]==0)
                {
                    grid[r][c+1]=1;
                    q.push({r,c+1});
                }
            }
        }
        return (ans<=1)? -1: ans-1;
    }
};