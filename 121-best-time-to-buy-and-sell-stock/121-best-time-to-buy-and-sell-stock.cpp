class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>dp(prices.size(),0);
        int maxe=INT_MIN;
        for(int i=prices.size()-1;i>=0;i--)
        {
            maxe=max(prices[i],maxe);
            dp[i]=maxe-prices[i];
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};