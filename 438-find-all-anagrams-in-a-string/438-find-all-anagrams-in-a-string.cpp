class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> sh(256,0),ph(256,0);
        
        vector<int> ans;
        
        int pn=p.length();
        int sn=s.length();
        if(sn<pn)
            return ans;
        int l=0,r=0;
        while(r<pn)
        {
            sh[s[r]]++;
            ph[p[r]]++;
            r++;
        }
        r--;
        while(r<sn)
        {
        
            if(ph==sh)
                ans.push_back(l);
            r++;
            if(r!=sn)
            {
                sh[s[r]]++;
            }
            sh[s[l]]--;
            l+=1;
        }
        return ans;
        
        
    }
};