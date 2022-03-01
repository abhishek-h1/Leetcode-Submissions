class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(int i=0;i<nums2.size();i++)
        {
            for(int j=i;j<nums2.size();j++)
            {
                if(nums2[j]>nums2[i])
                {
                    m[nums2[i]]=nums2[j];
                    break;
                }
                m[nums2[i]]=-1;
            }
        }
        vector<int>ans;
        for(int n:nums1)
            ans.push_back(m[n]);
        return ans;
    }
};