class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            // cout<<m[nums
            if(m[nums[i]]>=2)
                return true;
        }
        return false;
        
    }
};