class Solution {
public:
    int climbStairs(int n) {
        if(n==1 or n==2)
            return n;
        
        n-=2;
        int a=1,b=2;
        int t;
        while(n--)
        {
            t=a+b;
            a=b;
            b=t;
        }
        return t;
    }
};