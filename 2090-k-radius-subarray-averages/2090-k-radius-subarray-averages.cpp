class Solution {
public:
    long long int Calculate_sum(vector<int>& num,int curr,int k)
    {
        long long int s=0;
        for(int i=curr;i<=curr+k;i++)
        {
            s+=num[i];
        }
        return s;
    }
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans;
        int n=2*k+1,b=0,e=0;
        long long int sum=0,temp=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(i-k<0 || i+k>=nums.size())
            {
                ans.push_back(-1);
                sum+=nums[i];
            }
            else if(temp!=-1)
            {
                   temp-=nums[b++];
                    temp+=nums[e++];
                   ans.push_back(temp/n);  
            }
            else
            {
                   sum+=Calculate_sum(nums,i,k);
                   temp=sum;
                   ans.push_back(temp/n);
                  e=i+k+1;
            }
        }
        return ans;
    }
};