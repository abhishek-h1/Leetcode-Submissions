class Solution {
public:
    char findTheDifference(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        map<char,int>m;
        for(int i=0;i<t.length()-1;i++)
        {
            m[t[i]]++;
            m[s[i]]--;
        }
        m[t[t.length()-1]]++;
        char ans;
        for(char c:t)
        {
            if(m[c])
            {
                ans=c;
            }
        }
        return ans;
    }
};