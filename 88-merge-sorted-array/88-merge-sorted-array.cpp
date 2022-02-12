class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> v;
        
        int i=0,j=0;
        if(!nums2.empty())
        {
            
            while(i<m && j<n)
            {
                if(nums1[i]<nums2[j])
                {
                    v.push_back(nums1[i]);
                    i++;
                }
                else if(nums1[i]>nums2[j])
                {
                    v.push_back(nums2[j]);
                    j++;
                }
                else
                {
                    v.push_back(nums1[i]);
                    v.push_back(nums2[j]);
                    i++;
                    j++;
                }
            }
            if(i<m)
            {
                while(i<m)
                {
                    v.push_back(nums1[i]);
                    i++;
                }
            }

            if(j<n)
            {
                while(j<n)
                {
                    v.push_back(nums2[j]);
                    j++;
                }
            }
            nums1.clear();

            for(int k=0;k<m+n;k++)
            {
                nums1.push_back(v[k]);
            }

        }
        
    }
};