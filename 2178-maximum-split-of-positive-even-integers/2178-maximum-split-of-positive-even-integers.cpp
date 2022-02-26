class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>v;
        if(finalSum%2)
            return v;
        int x=2;
        
        while(finalSum>=x)
        {
            v.push_back(x);
            finalSum-=x;
            x+=2;
        }
        v[v.size()-1]+=finalSum;
        return v;
        
    }
};