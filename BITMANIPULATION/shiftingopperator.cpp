Left Shift and Right Shift Operators in C/C++

Left Shift :

Denoted as : << 

Eg: N<<i (N: first operand, i: second operand)

Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.
  Or in other words left shifting an integer “x” with an integer “y” denoted as ‘(x<<y)’ is equivalent to multiplying x with 2^y (2 raised to power y). 

eg: lets take N=22; which is 00010110 in Binary Form.

      Now, if “N is left-shifted by 2” i.e N=N<<2 then N will become N=N*(2^2). Thus, N=22*(2^2)=88 which can be wriiten as 01011000.
 .....................................................................       
 /* C++ Program to demonstrate use of left shift
operator */
#include<stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00001010
	printf("a<<1 = %d\n", a<<1);
	
	// The result is 00010010
	printf("b<<1 = %d\n", b<<1);
	return 0;
}
.......................................................................
Right Shift :

Denoted as : >>

Eg: N>>i (N: first operand, i: second operand)

Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.
  In other words right shifting an integer “x” with an integer “y” denoted as ‘(x>>y)‘ is equivalent to dividing x with 2^y. 

eg: lets take N=32; which is 100000 in Binary Form.
  
 ................................................................ 
  /* C++ Program to demonstrate use of right
shift operator */
#include <iostream>
using namespace std;

int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000010

	cout <<"a>>1 = "<< (a >> 1)<< endl;

	// The result is 00000100
	cout <<"b>>1 = "<< (b >> 1) << endl;
	return 0;
}

// This code is contributed by shivanisinghss2110

......................................................................
     Now, if “N is right-shifted by 2” i.e N=N>>2 then N will become N=N/(2^2). Thus, N=32/(2^2)=8 which can be wriiten as 1000.

