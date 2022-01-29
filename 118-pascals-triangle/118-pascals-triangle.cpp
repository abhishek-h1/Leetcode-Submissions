class Solution {
public:
    vector<vector<int>> generate(int Rows) {
        
        vector<vector<int>> res;
        vector<int>temp;
        
        for(int i=1;i<=Rows;i++)
        {
            int v=1;
            for(int j=1;j<=i;j++)
            {
                temp.push_back(v);
                v=v*((i-j))/j;
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
        
    }
};


/*
nCr = n!/((n-r)!*r!)
iCj = i!/((i-j)!*j!)

iC(j-1) = i!/((i-j+1)!*(j-1)!)

iCj = 
*/