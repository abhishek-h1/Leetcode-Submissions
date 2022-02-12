class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> m;
        
        int flag=true;
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(m.find(board[i][j])!=m.end())
                {
                    cout<<"HERE  i"<<i<<"  j "<<j;
                    return false;
                }
                if(board[i][j]!='.')
                    m.insert(board[i][j]);
                
            }
            m.clear();
        }
        
        
       for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(m.find(board[j][i])!=m.end())
                {
                    cout<<"Here  i"<<i<<"  j "<<j;

                    return false;
                }
                if(board[j][i]!='.')
                    m.insert(board[j][i]);
                
            }
            m.clear();
        }
        
        
        
        for(int i=0;i<7;i+=3)
        {
            for(int j=0;j<7;j+=3)
            {
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(m.find(board[i+k][j+l])!=m.end())
                        {
                            return false;
                        }
                        if(board[i+k][j+l]!='.')
                            m.insert(board[i+k][j+l]);  
                    }
                }
                m.clear();
            }
        }
        
        return true;
    }
};