#include<iostream>
#include<cstring>
#include <vector>
using namespace std;


vector<int> adj[1000000];
int visited[1000000];

///////////////////////////////
void dfs(int v)
{
	visited[v]=1;
	cout<<v<<" ";
	for(auto i = adj[v].begin();i!=adj[v].end();i++)
	{
		if(visited[*i]==0)
			dfs(*i);
	}
}
///////////////////////////////
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

	int vertices,edges;
	cin>>vertices>>edges;
	int u,v;
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=edges;i++)
	{
		adj[i].clear();
	}
	for(int i = 1;i<=edges;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);
	
	

return 0;
}