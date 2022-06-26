class Solution {
public:
    
    void dfs(vector<vector<int>>&adj,int src, vector<bool>&vis)
    {
        vis[src]=true;
        
        for(int n:adj[src])
        {
            if(!vis[n])
                dfs(adj,n,vis);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n>connections.size()+1)
            return -1;
        
        vector<bool> vis(n,false);
        vector<vector<int>>adj(n);
        for(int i=0;i<connections.size();i++)
        {
            int a=connections[i][0];
            int b=connections[i][1];
            
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(adj,i,vis);
                ans++;
            }
        }
        return ans-1;
    }
};