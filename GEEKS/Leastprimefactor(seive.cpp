class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
         vector<int> ans(n+2,0);
       ans[1]=1;
       for(int i=2;i<=n;i++)
       {
           if(ans[i]==0)
           {
               ans[i]=i;
               for(int j=i*i;j<=n;j+=i)
               {
                   if(ans[j]==0)
                   ans[j]=i;
               }
           }
       }
       return ans;
    }
};


//Note : The least prime factor of all even numbers is 2. A prime number is its 
//own least prime factor (as well as its own greatest prime factor).1 needs to be printed for 1.â€‹
