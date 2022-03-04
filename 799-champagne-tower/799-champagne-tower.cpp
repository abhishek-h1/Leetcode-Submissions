class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        // ios::base_sync::stdio(0);
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<double>> v(102,vector<double>(102,0));
        v[0][0]=poured;
        for(int r=0;r<query_row;r++)
        {
            for(int c=0;c<=r;c++)
            {
                auto temp=(v[r][c]-1.0)/2.0;
                if(temp>0)
                {
                    v[r+1][c]+=temp;
                    v[r+1][c+1]+=temp;
                }
                    
            }
        }
    
        return min(1.0,v[query_row][query_glass]);
    }
};