class Solution {
public:
    bool canConstruct(string r, string m) {
        if(m.length()<r.length())
            return false;
        map<char,int>mp;
        int i=0;
        for(char c:m)
        {
            mp[c]++;   
        }
        for(char c:r)
        {
            if(mp[c]--<1)
                return false;
        }
        return true;
    }
};