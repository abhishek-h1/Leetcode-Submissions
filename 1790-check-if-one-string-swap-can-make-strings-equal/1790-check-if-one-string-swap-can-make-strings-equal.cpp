class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1=s1.length(),n2=s2.length();
        if(n1!=n2)
            return false;
        
        map<int,char>m1,m2;
        int check=0;
        vector<int>v;
        for(int i=0;i<n1;i++)
        {
            m1[i]=s1[i];
            m2[i]=s2[i];
            if(s1[i]!=s2[i])
            {
                check++;
                v.push_back(i);
            }
        }
        if(check==0)
            return true;
        if(check==2)
        {
            if((m1[v[0]]==m2[v[1]]) && (m1[v[1]]==m2[v[0]]))
                return true;
        }
        return false;
        
    }
};