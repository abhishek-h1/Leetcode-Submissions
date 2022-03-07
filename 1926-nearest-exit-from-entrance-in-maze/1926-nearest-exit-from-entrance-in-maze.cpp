class Solution {
public:
    bool safe(int i,int j, int r, int c)
    {
        if(i>=0 and j>=0 and i<r and j<c)
            return true;
        return false;
    }
    
    bool exit(int i, int j, int r, int c)
    {
        if(i==0 or j==0 or i==r-1 or j==c-1)
            return true; 
        return false;
    }
    
    vector<int> x = {0, 0, -1, 1};
    vector<int> y = {1, -1, 0, 0};
    
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>> q;
        int r=maze.size();
        int c=maze[0].size();
        if(r==1 and c==1)
            return -1;
        
        char w='+', route='.';
        
        q.push({entrance[0], entrance[1]});
        
        vector<vector<int>>dist(r, vector<int>(c,0));
        maze[entrance[0]][entrance[1]]=w;
        
        while(!q.empty())
        {
            int cx = q.front().first;
            int cy = q.front().second;
            
            q.pop();
            
            // cout<<exit(cx,cy,r,c)<<" "<<cx<<" "<<cy<<endl;
            
            if(exit(cx,cy,r,c) and (cx!=entrance[0] or cy!=entrance[1]))
                return dist[cx][cy];
            
            for(int i=0;i<4;i++)
            {
                int nx = cx+x[i];
                int ny = cy+y[i];
                // cout<<"in boy"<<endl;
                
                if(safe(nx,ny, r, c) and maze[nx][ny]=='.')
                {
                    dist[nx][ny]=dist[cx][cy]+1;
                    q.push({nx,ny});
                    maze[nx][ny]=w;
                }
            }
            
        }
        return -1;
        
        
    }
};