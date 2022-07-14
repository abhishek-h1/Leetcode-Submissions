class Solution {
public:
    bool isVowel(char c)
    {
        c=tolower(c);
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(isVowel(s[i]))
                st.push(s[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};