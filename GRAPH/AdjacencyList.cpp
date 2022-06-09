#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v)
    {
    adj[u].push_back(v);
    adj[v].push_back(u);
    }
void print(vector<int>adj[],int x)
{
   for(int i=0;i<x;i++)
   {
        for(auto it:adj[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
   }
}

int main() {
    int v=4;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    print(adj,v);
	return 0;
}

..........................
1 2 
0 2 3 
0 1 
1
