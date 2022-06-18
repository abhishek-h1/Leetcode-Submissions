class Solution {
public:
    int cx[4]={0,0,-1,1};
    int cy[4]={1,-1,0,0};
    bool isValid(vector<vector<int>>& image,int r,int c)
    {
        int m=image.size();
        int n=image[0].size();
        
        if(r<0 || c<0 || r>=m || c>=n)
            return false;
        return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int c=image[sr][sc];
        if(c==color)
            return image;
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            image[x][y]=color;
            for(int i=0;i<4;i++)
            {
                int nx=x+cx[i];
                int ny=y+cy[i];
                
                if(isValid(image,nx,ny) && image[nx][ny]==c)
                {
                    q.push({nx,ny});
                    // vis[nx][ny]=true;
                    image[nx][ny]=color;
                }
            }
        }
        return image;
    }
};