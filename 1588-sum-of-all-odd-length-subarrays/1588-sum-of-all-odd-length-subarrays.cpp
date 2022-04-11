class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=1;i<=arr.size();i+=2)
        {
            for(int j=0;j+i<=arr.size();j++)
            {
                sum=accumulate(arr.begin()+j,arr.begin()+j+i,sum);
            }
        }
        return sum;
    }
};