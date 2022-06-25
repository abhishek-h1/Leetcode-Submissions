class Solution {
public:
    
    void dfs(vector<vector<int>> graph, vector<vector<int>>&res, vector<int> curr, int src)
    {
        if(src==graph.size()-1)
        {
            res.push_back(curr);
        }
        
        for(int i=0;i<graph[src].size();i++)
        {
            curr.push_back(graph[src][i]);
            dfs(graph,res,curr, graph[src][i]);
            curr.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int>curr;
        curr.push_back(0);
        dfs(graph, res, curr,0);
        return res;
    }
};