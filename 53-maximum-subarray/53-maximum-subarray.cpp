class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int l=0,r=0;
        int curr = 0;
        for(int i=0;i<nums.size();i++)
        {
            curr=max(nums[i],curr+nums[i]);
            sum=max(curr,sum);
        }
        return sum;
        
    }
};