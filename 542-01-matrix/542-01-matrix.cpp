class Solution {
    private:
    int x[4]={1,-1,0,0};
    int y[4]={0,0,-1,1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int m=mat.size();
        int n=mat[0].size();
        
        vector<vector<int>>dist(m, vector<int>(n,INT_MAX));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
        }
        
        while(!q.empty())
        {
            int cx=q.front().first;
            int cy=q.front().second;
            
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int nx=cx+x[i];
                int ny=cy+y[i];
                
                if(nx>=0 and ny>=0 and nx<m and ny<n)
                {
                    if(dist[nx][ny]>dist[cx][cy]+1)
                    {
                        dist[nx][ny]=dist[cx][cy]+1;
                        q.push({nx,ny});
                    }
                }
                
            }
        }
        return dist;
    }
};