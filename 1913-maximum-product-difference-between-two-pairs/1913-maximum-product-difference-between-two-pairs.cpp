class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int min1,min2=INT_MAX,max1,max2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max2)
            {
                max1=max2;
                max2=nums[i];
            }
            else if(nums[i]>max1)
            {
                max1=nums[i];
            }
            if(nums[i]<min2)
            {
                min1=min2;
                min2=nums[i];
            }
            else if(nums[i]<min1)
            {
                min1=nums[i];
            }
        }
        return (max1*max2)-(min1*min2);
    }
};