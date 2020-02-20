#include <iostream>
#include <vector>
#include <cstring>
#define pb push_back
#define endl "\n"

using namespace std;
/////////////////////////////////////
void DFSUtil(vector<int> adj[],int visited[],int n,int v)
{
	int u = v;
	visited[v]=1;
	cout<<u<<" ";
	for(int i=0;i<adj[u].size();i++)
	{
		int w = adj[u][i];
		if(visited[w]==0)
			DFSUtil(adj,visited,n,w);
	}

}

/////////////////////////////////////
void DFS(vector<int> adj[],int n)
{
	int visited[n+1];
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(visited[i]==0)
			DFSUtil(adj,visited,n,i);
	}
}
//////////////////////////////////////


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
	vector<int> adj[vertices+1];
	int u,v;
	for(int i=0;i<edges;i++)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	DFS(adj,vertices);
	

return 0;
}