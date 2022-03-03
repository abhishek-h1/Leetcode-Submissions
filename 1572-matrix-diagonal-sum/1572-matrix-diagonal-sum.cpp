class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int ans=0;
        for(int i=0;i<r;i++)
        {
            if(i==c-i-1)
                ans-=mat[i][i];
            ans+=mat[i][i];
            ans+=mat[i][c-1-i];
        }
        
        
        return ans;
    }
};