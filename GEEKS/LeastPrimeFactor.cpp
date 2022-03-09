class Solution
{
    public int[] leastPrimeFactor(int n)
    {
        // code here
        int[] arr=new int[n+1];
        for(int i=1;i<=n;i++)
        {
           
            arr[i]=primevalue(i);
        }
        return arr;
    }
    int primevalue(int num)
    {
        if(num%2==0)
        {
            return 2;
        }
        for(int j=3;j*j<=num;j++)
        {
            if(num%j==0)
            {
                return j;
            }
        }
        return num;
    }
