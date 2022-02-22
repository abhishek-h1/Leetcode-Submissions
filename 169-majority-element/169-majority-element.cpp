class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int ret=INT_MIN;
        for(int num:nums){
            m[num]++;
        }
        for( auto [k,v]:m)
        {
            ret = (v>nums.size()/2)?k:ret;
        }
        return ret;
    }
};