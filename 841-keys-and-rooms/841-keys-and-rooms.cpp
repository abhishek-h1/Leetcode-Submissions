class Solution {
public:
    void dfs(vector<vector<int>>& rooms,int u, set<int>&s)
    {
        s.insert(u);
        if(s.size()==rooms.size())
            return;
        for(int v:rooms[u])
        {
            if(s.find(v)==s.end())
            {
                s.insert(v);
                dfs(rooms,v,s);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> s;
        dfs(rooms,0,s);
        for(int e:s)
        {
            cout<<e<<" ";
        }
        cout<<endl;
        return (s.size()==rooms.size());
    }
};