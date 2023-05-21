class Solution {
public:
    int reverse_number(int n)
    {
        int num=0;
        while(n!=0)
        {
            num*=10;
            num+=n%10;
            n=n/10;
        }
        return num;
    }
    bool isSameAfterReversals(int num) {
        int initial=num;
        num=reverse_number(num);
        num=reverse_number(num);
        if(num==initial)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};