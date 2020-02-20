#include<bits/stdc++.h> 
using namespace std; 

class Graph 
{ 
	int V; 
	list<int> *adj;
public: 
	Graph(int V);
	void addEdge(int v, int w); 
	void DFS(int s); // prints all vertices in DFS manner 
	// from a given source. 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w);  
} 

// prints all not yet visited vertices reachable from s 
void Graph::DFS(int s) 
{ 
	// Initially mark all verices as not visited 
	vector<bool> visited(V, false); 

	// Create a stack for DFS 
	stack<int> stack; 

	// Push the current source node. 
	stack.push(s); 

	while (!stack.empty()) 
	{ 
		// Pop a vertex from stack and print it 
		s = stack.top(); 
		stack.pop(); 

		// Stack may contain same vertex twice. So 
		// we need to print the popped item only 
		// if it is not visited. 
		if (!visited[s]) 
		{ 
			cout << s << " "; 
			visited[s] = true; 
		} 

		// Get all adjacent vertices of the popped vertex s 
		// If a adjacent has not been visited, then push it 
		// to the stack. 
		for (auto i = adj[s].begin(); i != adj[s].end(); ++i) 
			if (!visited[*i]) 
				stack.push(*i); 
	} 
} 

// Driver program to test methods of graph class 
int main() 
{ 
	Graph g(5); // Total 5 vertices in graph 
	g.addEdge(1, 0); 
	g.addEdge(0, 2); 
	g.addEdge(2, 1); 
	g.addEdge(0, 3); 
	g.addEdge(1, 4); 

	cout << "Following is Depth First Traversal\n"; 
	g.DFS(0); 

	return 0; 
} 