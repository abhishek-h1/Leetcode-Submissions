class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((mat.size()==r && mat[0].size()==c) || mat.size()*mat[0].size()!=r*c )
            return mat;
        
        vector<int>temp;
        for(vector<int>v:mat)
        {
            for(int val:v)
            {
                temp.push_back(val);
            }
        }
        mat.clear();
        vector<int> row;
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                row.push_back(temp[k]);
                k++;
            }
            mat.push_back(row);
            row.clear();
        }
        return mat;
    }
};