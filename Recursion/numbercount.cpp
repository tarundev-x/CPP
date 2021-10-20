#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int digitcount(long long int n,int count)
{
   
   if(n>0)
   {
      count++;
      digitcount(n/10,count);
   }
   else
   {
     return count;
       
   }
}
int main()
{
   long long int n;
   cin>>n;
   int count=0;
   cout<<digitcount(n,count);
}
