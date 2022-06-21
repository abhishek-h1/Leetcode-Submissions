class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int l=0,r=m-1;
        
        while(l<=r)
        {
            int mid=l+((r-l)>>1);
            
            if(target>=matrix[mid][0] and target<=matrix[mid][n-1])
            {
                int l1=0,r1=n-1;
                
                while(l1<=r1)
                {
                    int mi=l1+((r1-l1)>>1);
                    if(target==matrix[mid][mi])
                        return true;
                    if(target>matrix[mid][mi])
                        l1=mi+1;
                    else
                        r1=mi-1;
                }
            }
            if(target>matrix[mid][n-1])
                l=mid+1;
            else
                r=mid-1;
        }
        return false;
    }
};