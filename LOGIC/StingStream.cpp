
// CPP program to count words in a string
// using stringstream.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countWords(string str)
{
    //breaking input into word using string stringstream
    stringstream is(str);//using for breaking the words
    string word;//to store the individual words
    int count=0;
    while(is>>word)
    {
        count++;
    }
    return count;
}
int main() {
    string s="My name is Tarun dev";
	cout<<"Number of words in strinng :"<<countWords(s);
	return 0;
}


// CPP program to demonstrate use of stringstream
// to count frequencies of words.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printfrequency(string str)
{
    //each word it map to its frequency
   map<string,int>mp;
   stringstream ss(str);//used for breakinng words
   string word;//to store individual words
   while(ss>>word)
   {
       mp[word]++;
   }
   for(auto it:mp)
   {
       cout<<it.first<<"->"<<it.second<<"\n";
   }
   
}
int main() {
    string s="My name is Tarun  is dev dev tarun";
	printfrequency(s);
	return 0;
}


// C++ program to remove spaces using stringstream

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string removespace(string str)
{
    stringstream ss;
    string temp;
    //storing the whole string into  string  stringstream
    ss<<str;
    //making the string empty
    str=" ";
    while(!ss.eof())
    {
        //extracting word by word from string
        ss>>temp;
        //concatenating int the string to returned
        str+=temp;
    }
    return str;
}
int main() {
    string s=" fwefe fdsadsf FD SFDF ";
	cout<<removespace(s);
	return 0;
}
