#include <iostream>
using namespace std;

void BFS(vector<int>adj[],int v,int s,bool visitded[])
{
    queue<int>q;
    visited[s]=true;
    q,push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
void BFSdis(vector<int>adj[],int v)
{
    bool visisted[v+1];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            BFS(adj,v,i,visited);
        }
    }
}
