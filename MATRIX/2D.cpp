///Suppose we want to create a 2D vector of “n” rows and “m” columns and input values. 
// CPP program
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n = 4;
	int m = 5;

	/*
	Create a vector containing "n"
	vectors each of size "m".
	*/
	vector<vector<int>> vec( n , vector<int> (m));

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			vec[i][j] = j + i + 1;
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	
return 0;
}
//output
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
  
  //Suppose we want to initialize a 2D vector of “n” rows and “m” columns, with a value 0.
  // CPP program
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n = 3;
	int m = 4;

	/*
	We create a 2D vector containing "n"
	elements each having the value "vector<int> (m, 0)".
	"vector<int> (m, 0)" means a vector having "m"
	elements each of value "0".
	Here these elements are vectors.
	*/
	vector<vector<int>> vec( n , vector<int> (m, 0));

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout<< endl;
	}
	
	return 0;
}
//output
0 0 0 0 
0 0 0 0 
0 0 0 0 
