class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.length(), n2=magazine.length();
        if(n1>n2)
            return false;
        
        int a[256]={0};
        int j=0;
        for(int i=0;i<n2;i++)
        {
            a[magazine[i]]++;
            if(j<n1)
            {
                a[ransomNote[j]]--;
                j++;
            }
            
        }
        for(int i=0;i<256;i++)
        {
            if(a[i]<0)
                return false;
        }
        return true;
    }
};