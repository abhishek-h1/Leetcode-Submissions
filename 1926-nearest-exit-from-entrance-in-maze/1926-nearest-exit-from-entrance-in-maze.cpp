class Solution {
    private:
    int x[4]={1,-1,0,0};
    int y[4]={0,0,-1,1};
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();
        
        queue<pair<int,int>>q;
        
        q.push({entrance[0],entrance[1]});
        
        int ans=0;
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                int cx=q.front().first;
                int cy=q.front().second;
                
                q.pop();
                
                if((cx==m-1 or cy==n-1 or cx==0 or cy==0) and (cx!=entrance[0] or cy!=entrance[1])) 
                        return ans;
                
                for(int i=0;i<4;i++)
                {
                    int nx=cx+x[i];
                    int ny=cy+y[i];
                    
                    if(nx<0 or nx>=m  or ny<0 or ny>=n)
                        continue;
                    if(maze[nx][ny]=='+')
                        continue;
                    
                    else
                    {
                        maze[nx][ny]='+';                       
                        q.push({nx,ny});
                    }

                    
                }
            }
            ans++;
        }
        return -1; 
    }
};