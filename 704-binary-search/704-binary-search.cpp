class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0,r=n-1;
        int mid = (r-l)/2;
        int ret=-1;
        
        while(l<=r)
        {
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
            mid=l+(r-l)/2;
        }
        return ret;
    }
};