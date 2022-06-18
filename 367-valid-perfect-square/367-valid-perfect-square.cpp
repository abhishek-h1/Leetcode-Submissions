class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0,r=(num/2)+1;
        long long mid;
        while(l<=r)
        {
            mid=l+((r-l)>>1);
            long long n=mid*mid;
            if(n==num)
                return true;
            if(n<num)
                l=mid+1;
            else
                r=mid-1;
        }
        return false;
    
    }
};