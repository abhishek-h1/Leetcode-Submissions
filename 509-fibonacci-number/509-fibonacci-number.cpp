class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1 or n==2)
            return 1;
        
        int first=1;
        int second=1;
        n-=2;
        int third;
        while(n--)
        {
            third=first+second;
            first=second;
            second=third;
        }
        return third;
    }
};