
#include<bits/stdc++.h>
using namespace std;

// Function to convert number into string
string numbers_to_strings(int argument){
    switch(argument) {
        case 0:
            return "zero";
        case 1:
            return "one";
        case 2:
            return "two";
        default:
            return "nothing";
    };
};

// Driver program
int main()
{
    int argument = 0;
    cout << numbers_to_strings(argument);
    return 0;
}
