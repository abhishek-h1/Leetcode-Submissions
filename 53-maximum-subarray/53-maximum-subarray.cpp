class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int temp=nums[0], sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            temp=max(nums[i], temp+nums[i]);
            sum=max(temp, sum);
            // cout<<sum<<" ";
        }
        return sum;
        
    }
};