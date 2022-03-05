class Solution {
public:
    
    vector<int>x = {0,0,-1,1};
    vector<int>y = {1,-1,0,0};
    
    bool safe(int i,int j, int m, int n)
    {
        if(i<0||j<0||j>=n||i>=m)
            return false;
        return true;
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        
        if(r==0)
            return mat;
        vector<vector<int>> ans(r,vector<int>(c,INT_MAX));
        queue<pair<int,int>> q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        
        
        while(!q.empty())
        {
            int cx = q.front().first;
            int cy = q.front().second;
            
            q.pop();
            
            
            for(int i=0;i<4;i++)
            {
                int nx=cx+x[i];
                int ny = cy + y[i];
                
                if(safe(nx,ny,r,c) and ans[nx][ny]>ans[cx][cy]+1)
                {
                    q.push({nx,ny});
                    ans[nx][ny]=ans[cx][cy]+1;
                }
            }
        }
        return ans;
    }
};