#include <bits/stdc++.h>
using namespace std;

int main() {
	int M,N;
	cin>>M>>N;
vector<vector<int>>v(M,vector<int>(M,1));
	for(int i=0;i<M;i++)
	{
	    for(int j=0;j<N;j++)
	    {
	        int p;
	        cin>>p;
	        v[i][j]=p;
	    }
	}
	int maxi=max(M,N);
	 map<int,int>mapp;
	   for(int i=0;i<maxi;i++)
	   {
	       for(int j=0;j<maxi;j++)
	       {  
	           if(i==j)
	           {
	               continue;
	           }
	           mapp[v[i][j]]++;
	       }
	   }
	    int sum=0;
	   int p=0;
	   for(int i=0;i<maxi;i++)
	   {
	       sum+=mapp[v[p][p]];
	       p++;
	   }
	   cout<<sum;
}
