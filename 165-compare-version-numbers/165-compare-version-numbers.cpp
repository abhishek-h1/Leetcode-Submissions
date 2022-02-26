class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n1=v1.length(), n2=v2.length();
        int i=0,j=0;
        while(i<n1 || j<n2)
        {
            int t1=0,t2=0;
            
            while(i<n1 && v1[i]!='.')
            {
                t1 = t1*10 + (v1[i]-'0');
                i++;
            }
            while(j<n2 && v2[j]!='.')
            {
                t2= t2*10 + (v2[j]-'0');
                j++;
            }
            i++;
            j++;
            
            if(t1>t2)
                return 1;
            else if(t2>t1)
                return -1;
        }
        return 0;
    }
};