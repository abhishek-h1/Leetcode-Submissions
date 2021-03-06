class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        for(char c:t)
        {
            if(m[c]--<1)
                return false;
        }
        return true;
        
    }
};