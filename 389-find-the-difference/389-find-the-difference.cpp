class Solution {
public:
    char findTheDifference(string s, string t) {
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