class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        sort(accounts.begin(),accounts.end(),[](const vector<int>& v1,const vector<int>&v2) {
            return accumulate(v1.begin(),v1.end(),0) > accumulate(v2.begin(),v2.end(),0);
        });
        
        return accumulate(accounts[0].begin(),accounts[0].end(),0);
        
    }
};