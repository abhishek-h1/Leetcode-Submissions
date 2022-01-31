class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl=s.length(), tl=t.length();
        
        if(sl!=tl)
            return false;
        
        int a[256]={0};
        for(int i=0;i<sl;i++)
        {
            a[s[i]]++;
            a[t[i]]--;
        }
        for(int i=0;i<sl;i++)
        {
            if(a[s[i]]!=0)
            {
                return false;
            }
        }
        return true;
        
    }
};