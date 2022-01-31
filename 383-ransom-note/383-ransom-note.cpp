class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a1[256]={0};
        for(int i=0;i<magazine.length();i++)
        {
            a1[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(a1[ransomNote[i]]>0)
            {
                a1[ransomNote[i]]--;
            }
            else
                return false;
            
        }
        return  true;
        
    }
};