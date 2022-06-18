class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=INT_MIN;
        int r=prices[prices.size()-1];
        
        for(int i=prices.size()-1;i>=0;i--)
        {
            r=max(r,prices[i]);
            ans=max(ans,r-prices[i]);
            // cout<<r<<" "<<ans<<endl;
        }
        return ans;
            
    }
};