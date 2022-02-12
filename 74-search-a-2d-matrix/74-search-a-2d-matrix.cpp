class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1;
        if(matrix.size()==0)
            return false;
        int mid = l+((r-l)/2);
        int n=matrix[0].size();
        while(l<=r)
        {
            mid = l+((r-l)/2);
            if(target>=matrix[mid][0] && target <=matrix[mid][n-1])
            {
                l=0;
                r=n-1;
                int p=mid;
                mid=l+((r-l)/2);
                while(l<=r)
                {
                    mid=l+((r-l)/2);
                    if(matrix[p][mid]==target)
                    {
                        return true;
                    }
                    else if(matrix[p][mid]>target)
                    {
                        r=mid-1;
                    }
                    else
                        l=mid+1;
                }
                return false;
            }
            else if(target<matrix[mid][0])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;
    }
};



// if(r==1)
        // {
        //     r=n-1;
        //     mid=l+((r-l)>>2);
        //     while(l<=r)
        //     {
        //         mid=l+((r-l)>>1);
        //         if(matrix[0][mid]==target)
        //         {
        //             return true;
        //         }
        //         else if(matrix[0][mid]>target)
        //         {
        //             r=mid-1;
        //         }
        //         else
        //             l=mid+1;
        //     }
        //     return false;
        // }