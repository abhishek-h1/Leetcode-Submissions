class Solution {
public:
    string reverseWords(string s) {
        int l=0,r=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                r++;
            if(s[i]==' '||i==s.length()-1)
            {
                reverse(s.begin()+l,s.begin()+r);
                l=r=i+1;
            }
        }
        return s;
        
    }
};