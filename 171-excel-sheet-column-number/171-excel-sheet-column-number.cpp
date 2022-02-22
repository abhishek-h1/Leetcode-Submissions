class Solution {
public:
    int titleToNumber(string s) {
        long long ans=0;
        for(int i=0;i<s.length();i++){
            int d=(s[i]-'A'+1);
            ans=ans*26+d;
        }
        // ans+=s[s.length()-1]-'A'+1;
        return ans;
    }
};