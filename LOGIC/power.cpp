#include <iostream>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	int res=1;
	while(x)
	{
	    if(x&1==1)
	    {
	        res*=n;
	    }
	    x=x>>1;
	    n=n*n;
	}
	cout<<res;
}
