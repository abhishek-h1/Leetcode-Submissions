class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        set<int> f(forbidden.begin(),forbidden.end());
        queue<pair<int,bool>> q; // pair<pos,(arrived by moving forward)?true:false) true means that bug can move front or back 
        //false means that bug has already arrived using back step hence it can only move forward
        
        
        f.insert(0);
        q.push({0,true});
        int ans=0;
        
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                auto curr=q.front();
                q.pop();
                
                if(curr.first==x)
                    return ans;
                int forw=curr.first+a;
                if(forw<=6000 and f.count(forw)==0)
                {
                    f.insert(forw);
                    q.push({forw,true});
                }
                
                if(curr.second)
                {
                    int back=curr.first-b;
                    if(back<=6000 and back>=0 and f.count(back)==0)
                    {
                        q.push({back,false});
                    }
                }
                
            }
            ans++;
        }
        return -1;
    }
};