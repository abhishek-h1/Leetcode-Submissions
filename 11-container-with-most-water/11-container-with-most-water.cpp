class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int max=INT_MIN;
        while(l<r)
        {
            int area=min(height[l],height[r])*(r-l);
            max = (area>max)?area:max;
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return max;
    }
};