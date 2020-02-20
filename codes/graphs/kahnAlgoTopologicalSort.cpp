#include<iostream>
#include <queue>
#include <cstring>
#include <set>
#include <list>

using namespace std;

///////////////////////////////
/////////////////////////////////
///////////////////////////////
void kahnTopoSort(list<int> adj[],vector<int> in_degree)
{
	set<int> s;
	for(int i=1;i<in_degree.size();i++)
	{
		if(in_degree[i]==0)
			s.insert(i);
	}
	int cnt=0;
	vector<int> lexOrderTop;	
	while(!s.empty())
	{
		int u = *s.begin();
		s.erase(s.begin());
		lexOrderTop.push_back(u);
		for(auto itr=adj[u].begin();itr!=adj[u].end();itr++)
		{
			if(--in_degree[*itr]==0)
				s.insert(*itr);
			cnt++;
		}

	}

	  
	    // Print topological order 
    for (int i = 0; i < lexOrderTop.size(); i++) 
        cout << lexOrderTop[i] << " "; 
} 

////////////////////////////////

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
	list<int> adj[vertices+1];
	vector<int> in_degree(vertices+1,0);
	int u,v;
	for(int i=0;i<edges;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		in_degree[v]++;
	}
	kahnTopoSort(adj,in_degree);

	

return 0;
}