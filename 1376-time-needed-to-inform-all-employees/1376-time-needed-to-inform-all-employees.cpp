class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans=0;
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++)
        {
            if(manager[i]!=-1)
            {
                v[manager[i]].push_back(i);
            }
        }
        
        stack<pair<int,int>>st;
        st.push({headID,informTime[headID]});
        while(!st.empty())
        {
            int t=st.top().first;
            int curr=st.top().second;
            st.pop();
            
            for(int i:v[t])
            {
                st.push({i,curr+informTime[i]});
                ans=max(ans,curr+informTime[i]);
            }
        }
        return ans;
    }
};