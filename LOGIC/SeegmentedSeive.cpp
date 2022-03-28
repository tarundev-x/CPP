#include <bits/stdc++.h>
using namespace std;

long long N=10000001;
vector<int>seive(N,1);
void genseive()
{
    seive[0]=0;
    seive[1]=0;
    
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==true)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                seive[j]=false;
            }
        }
    }

}

void getprime(int nums,vector<int>&ds)
{
    
    for(int i=2;i<=nums;i++)
    {
        if(seive[i]==1)
        {
            ds.push_back(i);
        }
    }
}
int main() {
    int n;
    cin>>n;//1<=n<<1069
    int L,R;
    cin>>L>>R;///L-R<=10^6
    
	//code
	genseive();
	vector<int>ds;
	getprime(sqrt(R)+1,ds);
	vector<int>dummy(R-L+1,1);

	for(auto it:ds)
	{
	    int firstmul=(L/it)*it;
	    if(firstmul<L) firstmul+=it;
	    for(int j=max(firstmul,it*it);j<=R;j+=it)
	    {
	      dummy[j-L]=0;  
	    }
	}
	for(int i=0;i<=(R-L+1);i++)
	{
	    if(dummy[i]==1& (L+i)!=1)
	    {
	        cout<<L+i<<" ";
	    }
	}
	
	return 0;
}
