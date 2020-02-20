#include <iostream>
#include <cstring>
#include <vector>
#include<algorithm>
#include <stack>

#define endl "\n"
#define pb push_back

using namespace std;
////////////////////////////////////////


////////////////////////////////////////
void topologicalSortUtil(vector<int> adj[],int visited[],stack<int> &s,int v)
{
	int u = v;
	//cout<<u<<" \n";
	visited[u]=1;

	for(int i=0;i<adj[u].size();i++)
	{
		int w = adj[u][i];
		if(visited[w]==0)
			topologicalSortUtil(adj,visited,s,w);
	}
	s.push(u);
}
///////////////////////////////////////
void topologicalSort(vector<int> adj[],int n)
{
	int visited[n+1];
	memset(visited,0,sizeof(visited));
	for(int i=1;i<n;i++)
		sort(adj[i].begin(), adj[i].end());
	stack<int> stack;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0){
			cout<<"Calling for :"<<i<<endl;
			topologicalSortUtil(adj,visited,stack,i);
		}
	}
	while(stack.empty()==false)
	{
		cout<<stack.top()<<" ";
		stack.pop();
	}
}
///////////////////////////////////////
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
	int u , v;
	vector<int> adj[vertices+1];
	for(int i=0;i<edges;i++)
	{
		cin>>u>>v;
		adj[u].pb(v);
	}
	topologicalSort(adj,vertices);
	

return 0;
}