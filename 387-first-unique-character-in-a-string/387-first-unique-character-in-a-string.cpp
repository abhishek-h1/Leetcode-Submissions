class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        for(char c:s)
        {
            if(m[c]==1)
                return s.find(c);
        }
        return -1;
    }
};