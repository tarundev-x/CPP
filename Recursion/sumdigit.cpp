#include<iostream>
using namespace std;
int sum=0;
int sumd(int str)
{       ///	if(str<=9) return str;
	if(str==0) return 0;
	
	return sumd(str/10)+str%10;
	

}
int main()
{
	int str;
	cin>>str;
	cout<<sumd(str);
}
