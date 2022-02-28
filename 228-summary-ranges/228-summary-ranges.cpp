class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size()==0)
            return res;
        if(nums.size()==1)
        {
            res.push_back(to_string(nums[0]));
            return res;
        }
        
        string temp="";
        int left=0,right=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-1==nums[i])
                right=i+1;
            else
            {
                if(left!=right)
                {
                    temp+=(to_string(nums[left]));
                    temp+="->";
                    temp+=(to_string(nums[right]));
                }
                else{
                    temp+=(to_string(nums[left]));
                }
                res.push_back(temp);
                temp.clear();
                left=right=i+1;
            }
        }
        if(left!=right)
        {
            temp+=(to_string(nums[left]));
            temp+="->";
            temp+=(to_string(nums[right]));
        }
        else
        {
            temp+=(to_string(nums[left]));
        }
        res.push_back(temp);
        
        return res;
    }
};