class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        while(1)
        {
            if(n==1)
                return true;
            if(s.find(n)!=s.end())
            {
                return false;
            }
            s.insert(n);
            int temp=0;
            while(n)
            {
                temp+=(n%10)*(n%10);
                n/=10;
            }
            n=temp;
        }
        
    }
};