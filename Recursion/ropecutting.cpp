
//pseudo code ropecutting
int maxpiece(int n,int a,int b,int c)
{
	if(n==0) return 0;
	
	if(n<0) return -1;
	
	int res=max(maxpiece(n-a,a,b,c),maxpiece(n-b,a,b,c),maxpiece(n-c,a,b,c));
	
   if(res==-1) 
   		return -1;
   
   return res+1;
}
