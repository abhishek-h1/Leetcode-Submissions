class Solution {
public:
    int arraySign(vector<int>& nums) {
        int check=0;
        for(int n:nums)
        {
            if (n<0)
                check++;
            else if(n==0)
                return 0;
        }
        if(check%2)
            return -1;
        return 1;
    }
};