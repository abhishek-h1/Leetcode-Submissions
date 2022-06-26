class Solution {
public:
    void dfs(vector<vector<int>>adj, int src,vector<bool>&vis)
    {
        vis[src]=true;
        for(int i=0;i<adj[src].size();i++)
        {
            
            if(adj[src][i]==1 and vis[i]==false)
                dfs(adj,i,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        vector<bool>vis(isConnected.size(),false);
        for(int i=0;i<isConnected.size();i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(isConnected,i,vis);
            }
        }
        return ans;
    }
};