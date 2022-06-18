class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int p=0;
        int l=0,r=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(l==r-l-nums[p])
                return p;
            l+=nums[p];
            p++;
        }
        return -1;
    }
};