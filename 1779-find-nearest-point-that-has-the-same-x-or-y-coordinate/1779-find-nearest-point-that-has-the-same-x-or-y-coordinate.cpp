class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int m=INT_MAX;
        int index=-1;
        for(vector<int>v:points){
            if(v[0]==x || v[1]==y)
            {
                int temp=(abs(v[0]-x)+abs(v[1]-y));
                if(m>temp){
                    m=temp;
                    index= find(points.begin(), points.end(), v)-points.begin();
                }
                    
                
            }
                
        }
        return index;
    }
};