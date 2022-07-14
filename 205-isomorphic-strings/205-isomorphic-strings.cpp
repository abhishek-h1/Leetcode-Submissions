class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
        map<char,char>m;
        set<char>se;
        
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
                if(se.find(t[i])!=se.end())
                    return false;
                m[s[i]]=t[i];
            }
            else
            {
                if(m[s[i]]!=t[i])
                    return false;
            }
            se.insert(t[i]);
        }
        return true;
    }
};