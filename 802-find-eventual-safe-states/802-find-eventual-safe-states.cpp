class Solution {
public:
    
    bool dfs(vector<vector<int>>& graph, vector<int>& check, int src)
    {
        if(check[src]>0)
            return check[src]==2;
        check[src]=1;
        
        for(auto x:graph[src])
        {
            if(check[x]==2)
                continue;
            if(check[x]==1 || !dfs(graph,check,x))
                return false;
        }
        check[src]=2;
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>res;
        vector<int>check(graph.size(),0);
        for(int i=0;i<graph.size();i++)
        {
           if(dfs(graph,check,i))
               res.push_back(i);
        }
        return res;
    }
};