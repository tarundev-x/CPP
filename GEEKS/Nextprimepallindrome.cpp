	bool isprime(int N)
	{
	    if(N<2||N%2==0)
	        return N==2;
	    for(int i=3;i*i<=N;i++)
	    {
	        if(N%i==0)
	        {
	            return false;
	        }
	    }
	    return true;
	}
	
	
	public:
		int PrimePalindrome(int N){
		    if(8<=N && N<=11)
		        return 11;
		 for(int i=1;i<1000000;++i)
		 {
		     string s=to_string(i),reverse(s.rbegin(),s.rend());
		
		     int y=stoi(s+reverse.substr(1));
		     if(y>=N && isprime(y))
		        return y;
		 }
