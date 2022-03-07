class Solution {
public:
    vector<vector<int>>ans;
    vector<int> path;
    void dfs(vector<vector<int>>& graph, int u)
    {
        path.push_back(u);
        
        if(u==graph.size()-1)
            ans.push_back(path);
        else
        {
            for(auto v:graph[u])
                dfs(graph,v);
        }
        path.pop_back();
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph,0);
        return ans;
    }
};