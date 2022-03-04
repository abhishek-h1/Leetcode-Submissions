class Solution {
public:
    vector<int>x={0,0,-1,1};
    vector<int>y={1,-1,0,0};
    
    bool safe(int i, int j, int r, int c)
    {
        if(i<0 || j<0 || j>=c || i>=r)
            return false;
        return true;
    }
    
    void bfs(vector<vector<int>> &grid, queue<pair<int,int>> &q, vector<vector<bool>>& vis)
    {
        int r=grid.size();
        int c=grid[0].size();
        
        while(!q.empty())
        {
            auto cur=q.front();
            q.pop();
            vis[cur.first][cur.second]=true;
            
            for(int i=0;i<4;i++)
            {
                int nx = cur.first+x[i];
                int ny = cur.second+y[i];
                
                if(safe(nx,ny,r,c) and grid[nx][ny]>=grid[cur.first][cur.second] and vis[nx][ny]==false)
                {
                    q.push({nx,ny});
                    vis[nx][ny]=true;
                }
            }
            
            
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        vector<vector<bool>> pac(heights.size(), vector<bool>(heights[0].size(),false));
        vector<vector<bool>> atl(heights.size(), vector<bool>(heights[0].size(),false));
        
        queue<pair<int,int>>pq,aq;
        
        //Pushing columns coordinates that are next to pac and atl respectively
        for(int i=0;i<heights[0].size();i++)
        {
            pq.push({0,i});
            pac[0][i]=true;
            aq.push({heights.size()-1,i});
            atl[heights.size()-1][i]=true;
        }
        //Pushing row coors=dinates that are close to pac and atl resp
        for(int i=0;i<heights.size()-1;i++)
        {
            pq.push({i+1,0});
            pac[i+1][0]=true;
            aq.push({i,heights[0].size()-1});
            atl[i][heights[0].size()-1]=true;
        }
        
        bfs(heights,pq,pac);
        bfs(heights,aq,atl);
        
        vector<vector<int>>res;
        for(int i=0;i<heights.size();i++)
        {
            for(int j=0;j<heights[0].size();j++)
            {
                if(pac[i][j]==true && atl[i][j]==true)
                    res.push_back({i,j});
            }
        }
        return res;
        
    }
};