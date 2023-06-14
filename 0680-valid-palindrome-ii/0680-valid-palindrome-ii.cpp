class Solution {
public:
    bool Proceed(string s,int start,int end)
    {
        int i,j;
        for(i=start,j=end;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i,j;
        for(i=0,j=s.length()-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                break;
            }
        }
        if(Proceed(s,i,j-1))
        {
            return true;
        }
        if(Proceed(s,i+1,j))
        {
            return true;
        }
        return false;
    }
};