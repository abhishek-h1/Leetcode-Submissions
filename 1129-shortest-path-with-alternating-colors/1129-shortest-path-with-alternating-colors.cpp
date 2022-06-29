class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<pair<int,int>>>g(n);
        
        for(auto e:redEdges)
        {
            g[e[0]].push_back({e[1],0});
        }
        
        for(auto e:blueEdges)
        {
            g[e[0]].push_back({e[1],1});
        }
        
        
        vector<int> ans(n,INT_MAX);
        
        
        ans[0]=0;
        
        for(int i=0;i<2;i++)
        {
            set<pair<int,int>>vis;
            queue<pair<int,int>>q;
        
            q.push({0,i});
            vis.insert({0,i});
            int level=0;
            while(!q.empty())
            {
                int n=q.size();
                level++;
                while(n--)
                {
                    int t=q.front().first;
                    int c=q.front().second;
                    q.pop();
                    for(int j=0;j<g[t].size();j++)
                    {
                        if(vis.find(g[t][j])==vis.end() and g[t][j].second!=c)
                        {
                            vis.insert(g[t][j]);
                            q.push(g[t][j]);
                            ans[g[t][j].first]=min(ans[g[t][j].first],level);
                        }
                    }
                }
            }
        }
         for(int &e:ans)
            {
                if(e==INT_MAX)
                    e=-1;
            }
            return ans;
    }
};