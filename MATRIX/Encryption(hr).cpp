#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
//string ss="";
// for(int i=0;i<s.size();i++)
// {
//     if(s[i]!=' ')
//     {
//         ss+=s[i];
//     }
//     else
//     {
//         continue;
//     }
// }
int n=s.size();
int r=floor(sqrt(n));
int c=ceil(sqrt(n));
int k=0;
if(r*c<n)
{
     r++;
}
vector<vector<char>>v(r,vector<char>(c));
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        v[i][j]=s[k];
        k++;
    }
}
string ns="";
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
        char c=v[j][i];
        if(c)
        {
            ns+=c;
        }
    }
    ns+=' ';
}
return ns;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
