 double myPow(double x, int n) {
    
	double res=1;
        long long int N=n;
        if(N<0)
        {
            N=-1*N;
        }
   
	while(N)
	{
	    if(N&1==1)
	    {
	        res*=x;
	    }
        
	    N=N>>1;
	    x=x*x;
    }
        if(n<0)
        {
            return double(1.0)/double(res);
        }
      
        return res;
        
    }
