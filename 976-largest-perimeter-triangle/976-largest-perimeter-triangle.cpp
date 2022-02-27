class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        while(n>=3 && nums[n-3]+nums[n-2]<= nums[n-1])
            n--;
        if(n<3)
            return 0;
        return accumulate(nums.begin()+n-3,nums.begin()+n,0);
        
    }
};