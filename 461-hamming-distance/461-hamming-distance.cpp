class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int ans=0;
        while(n)
        {
            if(n%2)
                ans++;
            n/=2;
        }
        return ans;
        
    }
};