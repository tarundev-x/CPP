class Solution 
{
public:
    int reverse(int x) 
    {
   long int sum=0;
    if(x>=2147483647 ||x<= -2147483648)
       return 0;
   if(x>0)
   {
     while(x>0)
     {
         sum=sum*10;
         if(sum>=2147483647 ||sum<= -2147483648)
            return 0;
         sum=sum+x%10;
         x=x/10;
     }
       
   }
    else
    {
        x= -1*x;
        while(x>0)
        {
         sum=sum*10;
        if(sum>=2147483647 ||sum<= -2147483648)
           return 0;
         sum=sum+x%10;
         x=x/10;  
        }
        sum= -1*sum;
    }
     return int(sum);   
    }
};
