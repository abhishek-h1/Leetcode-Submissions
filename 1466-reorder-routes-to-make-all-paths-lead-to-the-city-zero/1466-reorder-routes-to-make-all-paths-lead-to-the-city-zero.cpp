class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> out[n], in[n];
        for(auto v:connections)
        {
            int a  = v[0];
            int b = v[1];
            in[b].push_back(a);
            out[a].push_back(b);
        }
        
        queue<int> q;
        q.push(0);
        vector<bool>vis(n,false);
        int ans = 0;
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            
            if(vis[cur])
                continue;
            
            vis[cur]=true;
            
            for(auto child:out[cur])
            {
                if(vis[child])
                    continue;
                ans++;
                q.push(child);
            }
            
            for(auto child:in[cur])
            {
                if(vis[child])
                    continue;
                q.push(child);
            }
        }
        return ans;
    }
};