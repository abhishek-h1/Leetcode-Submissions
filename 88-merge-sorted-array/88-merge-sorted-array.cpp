class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        // int s=(m<n)? m:n;
        int j=0,k=0;
        while(1)
        {
            if(j>=m || k>=n)
                break;
            if(nums1[j]<=nums2[k])
            {
                nums3.push_back(nums1[j]);
                j++;
            }
            else
            {
                nums3.push_back(nums2[k]);
                k++;
            }
        }
        while(j<m)
        {
            nums3.push_back(nums1[j]);
            j++;
        }
        while(k<n)
        {
            nums3.push_back(nums2[k]);
            k++;
        }
        nums1.clear();
        nums1=nums3;
    }
};