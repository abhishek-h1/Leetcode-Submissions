class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> r,c,box[9];
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char c1 =board[i][j];
                
                char c2=board[j][i];
                if(c1!='.')
                {
                    if(r[c1]++>0 or box[((i/3)*3) +(j/3)][c1]++>0)
                        return false;
                }
                if(c2!='.')
                {
                    if(c[c2]++>0)
                        return false;
                }
            }
            r.clear();
            c.clear();
        }
        return true;
    }
};