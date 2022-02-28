class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int prev=arr[1]-arr[0];
        int cur=0;
        for(int i=1;i<arr.size()-1;i++)
        {
            cur=arr[i+1]-arr[i];
            if(cur!=prev)
                return false;
        }
        return true;
    }
};