class Solution {
public:
    vector<vector<int>>graph;
    vector<int>vis;
    int ans=0;
    int numOfMinutes(int n, int headID, vector<int>& mngr, vector<int>& informTime) {
        graph.resize(n);
        vis.resize(n,0);
        
        int src;
        for(int i=0;i<mngr.size();i++){
            if(mngr[i]==-1){
                src=i;
                continue;
            }
            graph[i].push_back(mngr[i]);
            graph[mngr[i]].push_back(i);
        }
        dfs(src,0,informTime);
        return ans;
    }
    void dfs(int src,int tot, vector<int>&infoT){
        if(vis[src]){
            return;
        }
        vis[src] = 1;
        tot+=infoT[src];
            ans = max(ans,tot);
        for(auto it:graph[src]){
            if(vis[it]==0){
                dfs(it,tot,infoT);
            }
        }
    }
};