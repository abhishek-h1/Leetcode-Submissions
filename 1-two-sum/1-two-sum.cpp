class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        vector<int>v;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            diff=target-nums[i];
            if(m.find(diff)!=m.end())
            {
                v.push_back(i);
                v.push_back(m[diff]);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
        
    }
};