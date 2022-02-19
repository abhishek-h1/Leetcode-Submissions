class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        int x=2;
        vector<long long> v;
        if(finalSum%2)
            return v;
        while(finalSum>=x){
            finalSum-=x;
            v.push_back(x);
            x+=2;
        }
        if(finalSum>0)
        {
            v[v.size()-1]+=finalSum;
        }
        return v;
        
    }
};