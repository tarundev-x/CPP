#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int min_step(int n,int c)
{
    if(n==1) return c;
    int one=INT_MAX;
     int two=INT_MAX;
      int three=INT_MAX;
    if(n%3==0) one=min_step(n/3,c+1);
    if(n%2==0) two=min_step(n/2,c+1);
    if(n>=2) three=min_step(n-1,c+1);
    return min(one,min(two,three));

}
int main() {
	int n;
	cin>>n;
   cout<<min_step(n,0);
    
    
	return 0;
}
