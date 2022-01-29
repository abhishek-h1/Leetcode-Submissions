class Solution {
public:
    vector<int> getRow(int row) {
        vector<int> ret;
        long v=1;
        for(int j=1;j<=row+1;j++)
        {
            ret.push_back(v);
            v=v*(row+1-j)/j;
        }
        return ret;
        
    }
};