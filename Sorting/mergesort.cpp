#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    
    int i=0,j=0,k=l;
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
     for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k++]=a[i++];
        }
        else
        {
            arr[k++]=b[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=a[i++]; 
    }
    while(j<n2)
    {
         arr[k++]=b[j++];
    }
}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
}
int main() {
	int arr[]={5,2,8,5,3,9};
	 mergesort(arr,0,5);
	 for(auto it:arr)
	 {
	     cout<<it<<" ";
	 }
	return 0;
}

.........................
  rescurrence relation   
  
  T(n)=2T(n/2)+n
  T(n/2)=2T(n/4)+n/2
  .
  .
  T(1)=1
  
  ....level
  n/2^k=1
  n=2^k
  k=log(n)
  Timecomplexity
  
  T(n)=n+n+n+...log n times= n*log(n)
