class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        for(auto e:operations)
        {
            if(e=="--X" || e=="X--")
            {count-=1;}
            else
            {count+=1;}
        }
        return count;
    }
};