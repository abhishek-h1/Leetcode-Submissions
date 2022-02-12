class Solution {
public:
    bool checkValid(vector<vector<int>>& board) {
        set<char> m;
        int n=board.size();
            
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(m.find(board[i][j])!=m.end())
                {
                    // cout<<"HERE  i"<<i<<"  j "<<j;
                    return false;
                }
                if(board[i][j]!='.')
                    m.insert(board[i][j]);
                
            }
            m.clear();
        }
        
        
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(m.find(board[j][i])!=m.end())
                {
                    // cout<<"Here  i"<<i<<"  j "<<j;

                    return false;
                }
                if(board[j][i]!='.')
                    m.insert(board[j][i]);
                
            }
            m.clear();
        }
        return true;
    }
};