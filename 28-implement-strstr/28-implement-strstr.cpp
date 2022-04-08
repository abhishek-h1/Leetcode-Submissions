class Solution {
public:
    int strStr(string h, string n) {
        if(n.size()>h.size())
            return -1;
        int j=0;
        int ans = -1;
        for(int i=0;i<h.size();i++)
        {
            if(h[i]==n[j])
            {
                if(j==0)
                    ans=i;
                j++;
            }
            else
            {
                i=i-j;
                j=0;
            }
            if(j==n.size())
                return ans;
        }
        
        
        
        return -1;
    }
};