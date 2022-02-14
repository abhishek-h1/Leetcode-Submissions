class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int a[256]={0};
        for(int i=0;i<s.length();i++)
        {
            a[s[i]]++;
            a[t[i]]--;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(a[s[i]]!=0)
                return false;
        }
        return true;
        
    }
};