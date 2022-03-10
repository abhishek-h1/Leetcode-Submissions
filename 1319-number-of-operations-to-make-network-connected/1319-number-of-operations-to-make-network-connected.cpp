class Solution {
public:
    
    void dfs(vector<int> adj[], vector<bool>& vis, int src)
    {
        vis[src]=true;
        for(auto x:adj[src])
        {
            if(!vis[x])
                dfs(adj,vis,x);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        vector<int>adj[n];
        
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        
        vector<bool> vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(adj, vis, i);
            }
        }
        return ans-1;
        
    }
};