class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(char c:t)
        {
            if(s[j]==c && j<s.size())
            {
                j++;
            }
        }
        if(j!=s.size())
            return false;
        return true;
    }
};