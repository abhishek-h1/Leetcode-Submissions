class Solution {
public:
    int slope(int y2,int y1,int x1, int x2){
        if(x1==x2)
            return INT_MAX;
        return float((y2-y1)/(x2-x1));
    }
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()==2)
            return true;
        sort(c.begin(),c.end());
        float prev=slope(c[1][1],c[0][1],c[1][0],c[0][0]);
        
        for(int i=1;i<c.size()-1;i++)
        {
            if(prev!=slope(c[i+1][1],c[i][1],c[i+1][0],c[i][0]))
                return false;
        }
        return true;
    }
};