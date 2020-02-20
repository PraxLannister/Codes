#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

vector<int> adj[1000000];
int visited[1000000];

void DFS(int n , int v)
{
	int u = v;
	visited[u]=1;
	stack<int> s;
	s.push(u);
	while(!s.empty())
	{
		int u = s.top();
		cout<<u<<" ";
		s.pop();
		for(int i=0;i<adj[u].size();i++)
		{
			int w = adj[u][i];
			if(visited[w]==0)
			{
				s.push(w);
				visited[w]=1;	
			}
		}
	}	
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n,edges,u,v;
	cin>>n>>edges;
/*	int visited[n+1];
	vector<int> adj[n+1];*/

	memset(visited,0,sizeof(visited));


	for(int i=1;i<=edges;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	DFS(n,1);


	

return 0;
}