class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int i=0,j=0;
        int n1=w1.length(),n2=w2.length();
        string res="";
        while(i<n1 && j<n2)
        {
            res+=w1[i];
            res+=w2[j];
            i++;
            j++;
        }
        
        while(i<n1)
            res+=w1[i++];
        while(j<n2)
            res+=w2[j++];
        return res;
        
    }
};