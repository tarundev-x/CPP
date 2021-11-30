#include <iostream>
using namespace std;

int main() {
   int in;
 
 for(int i=1;i<=5;i++)
 {
     
     for(int j=1;j<=5;j++)
     {
         cin>>in;
         
         if(!in^1)
         {
            cout<<(abs(i-3)+abs(j-3)); 
            return 0;
         }
     }
 }
	return 0;
}
