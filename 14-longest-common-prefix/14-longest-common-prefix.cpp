class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
            return ans;
        bool flag=true;
        
        if(strs.size()==0)
            return strs[0];
        
        sort(strs.begin(),strs.end(),[](const string &s1,const string &s2){
            return s1.length()<s2.length();
        });
        int l=strs[0].length();
        int j=0;
        while(j<l)
        {
            for(int i=0;i<strs.size()-1;i++)
            {
                if(strs[i][j]!=strs[i+1][j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans+=strs[0][j];
            else
                break;
            j++;
        }
        return ans;
    }
};