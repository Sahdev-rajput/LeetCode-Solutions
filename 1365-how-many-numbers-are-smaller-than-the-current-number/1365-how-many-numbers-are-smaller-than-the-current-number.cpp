class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int Hash_Table[101]={0};
        for(auto e:nums){Hash_Table[e]++;}
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i];j++)
            {
                if(Hash_Table[j]>0)
                {
                    count+=Hash_Table[j];
                }
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};