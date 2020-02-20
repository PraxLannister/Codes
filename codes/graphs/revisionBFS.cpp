#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define pb push_back
#define endl "\n"
using namespace std;

void BFSUtil(vector<int> adj[],int n,int visited[],int v)
{
	int u =v;
	visited[v]=1;
	queue<int> queue;
	queue.push(u);
	while(!queue.empty())
	{
		u = queue.front();
		cout<<u<<" ";
		queue.pop();
		for(int i=0;i<adj[u].size();i++)
		{
			int w = adj[u][i];
			if(visited[w]==0)
			{
				queue.push(w);
				visited[w]=1;
			}
		}
	}
}


void BFS(vector<int> adj[],int n)
{
	int visited[n+1];
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++)
	{
		cout<<":";
		if(visited[i]!=1){
			BFSUtil(adj,n,visited,i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,edges;
	cin>>n>>edges;
	vector<int> adj[n+1];
	int u,v;
	for(int i=0;i<edges;i++)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	for(int i=0;i<=n;i++)
/*	{
		for(int j=0;j<adj[i].size();j++)
			cout<<adj[i][j]<<" ";
		cout<<endl;
	}*/
	BFS(adj,n);
	return 0;

}
