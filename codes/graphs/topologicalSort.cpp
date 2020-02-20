#include<iostream>
#include<list>
using namespace std;
class DAG
{
	int v;
	list<int> *adj;

public:
	DAG(int v)
	{
		this->v = v;
		adj=new list<int>[v];
	}
	void topologicalSortUtil(int v,bool visited[],stack<int> ans);
	void topologicalSort();
	void addEdge(int u ,int v)
	{
		adj[u].push_back(v);
	}

	~DAG()
	{
		delete[] adj;
	}
	
};

DAG::topologicalSortUtil(int v,bool visited[],stack<int> ans)
{
	visited[v]=true;
	list<int>::iterato i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
		if(visited[*i]==false)
			topologicalSortUtil(*i,visited,ans);
	ans.push(v);
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


	/* code here */
	

return 0;
}