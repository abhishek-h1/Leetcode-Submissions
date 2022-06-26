class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),false);
        stack<int>st;
        st.push(0);
        vis[0]=true;
        while(!st.empty())
        {
            int t=st.top();
            st.pop();
            
            for(int n:rooms[t])
            {
                if(!vis[n])
                {
                    vis[n]=true;
                    st.push(n);
                }
            }
        }
        
        for(bool b:vis)
        {
            if(!b)
                return false;
        }
        return true;
    }
};