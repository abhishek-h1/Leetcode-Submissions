class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int i, map<int,bool>&m)
    {
        if(m.find(i)!=m.end())
        {
            return m[i];
        }
        
        m[i]=false;
        for(int n:graph[i])
        {
            if(!dfs(graph,n,m))
                return false;
        }
        
        m[i]=true;
        return m[i];
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        
        map<int,bool>m;
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            if(dfs(graph,i,m))
                ans.push_back(i);
        }
        return ans;
    }
};