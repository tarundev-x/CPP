 bool isPowerofTwo(long long n){
        
        // Your code here 
       int count=0;
      while(n>0)
      {
          int temp=n&1;
          if(temp==1)
          {
              count++;
          }
          n=n>>1;
          
      }
       
       if(count==1) return true;
    else return false; 
