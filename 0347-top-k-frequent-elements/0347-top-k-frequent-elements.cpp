class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int max=0;
        for(int a: nums)
        {
           if(m.find(a)!=m.end())
           {
               m[a]++;
           }
           else
           {
               m[a]=1;
           }
           if(m[a]>max)
           {
               max=m[a];
           }
        }
        vector<int> vect;
        unordered_map<int,int>::iterator itr;
        while(k!=0)
        {
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second==max)
            {
                vect.push_back(itr->first);
                k--;
            }
        }
        max--;
        }
     return vect;
    }
};