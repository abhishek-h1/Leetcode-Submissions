class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        int ans=0;
        for(auto [k,v]:m)
        {
            ans+=v/2*2;
            if(ans%2==0 and v%2==1)
                ans++;
        }
        return ans;
    }
};