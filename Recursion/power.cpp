#include <iostream>
using namespace std;
int power(int n,int x,int res)
{
    //int res=1;
    if(x==0)
    {
        return res;
    }
    else
    {
      if(x&1==1)
      {
          res*=n;
      }
    }
    return power(n*n,x>>1,res);
}

int main()
{
	int n,x;
	cin>>n>>x;
	int res=1;
	cout<<power(n,x,res);
}
