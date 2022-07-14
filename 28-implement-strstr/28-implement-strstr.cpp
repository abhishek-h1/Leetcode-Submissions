#define sz 26

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        if(needle.length()>haystack.length())
            return -1;
        if(haystack==needle)
            return 0;
        long n=0,h=0;
        // long ind=0;
        
        for(int i=0;i<needle.size();i++)
        {
            n=(sz*n+(needle[i]-'a'+1))%INT_MAX;
            h=(sz*h+(haystack[i]-'a'+1))%INT_MAX;
        }
        
        long p=1;
        for(int i=0;i<needle.length()-1;i++)
        {
            p=(p*sz)%INT_MAX;
        }
        
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {
            if(n==h)
            {
                bool flag=true;
                for(int j=0;j<needle.size();j++)
                {
                    if(needle[j]!=haystack[i+j])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                    return i;
            }
            if(i<haystack.length()-needle.length())
            {
                h=h-(p*(haystack[i]-'a'+1));
                h=(sz*h+(haystack[i+needle.length()]-'a'+1))%INT_MAX;  
                if(h<0)
                    h+=INT_MAX;
            }
           
        }
        return -1;
    }
};