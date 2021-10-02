class Solution {
public:
   long long int numsquaresum(int n)
    {
        int squaresum=0;
        while(n)
        {
            squaresum+=(n%10)*(n%10);
            n=n/10;
        }
        return squaresum;
    }
    bool isHappy(int n)
    {
        long long int slow,fast;
        slow=n;
        fast=numsquaresum(n);
        while(slow!=fast)
        {
            slow=numsquaresum(slow);
            fast=numsquaresum(numsquaresum(fast));
        }
        if(slow==1 &&fast==1)
            return true;
        return false;
    }
};
