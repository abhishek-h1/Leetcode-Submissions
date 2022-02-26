class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>& v1, const vector<int>& v2){
            if(v1[0]<v2[0])
                return true;
            else if(v1[0]==v2[0])
                return v1[1]>v2[1];
            return false;
        });
        int l=-1,r=-1,ans=0;
        for(vector<int> v:intervals)
        {
            if(v[0]>=l && v[1]>r)
            {
                l=v[0];
                ans++;
            }
            r=max(r,v[1]);
        }
        return ans;
    }
};