
// Representation of Graph using Adjacency List
// Used an array of vector to reperesent adjacency list 

#include <bits/stdc++.h>
using namespace std;

// Add edges in a unditected graph
void addEdge(vector <int> list[] , int u , int v )
{
	list[u].push_back(v);
	list[v].push_back(u);
}

// Print the adjacency list
void PrintGraph(vector <int > list[] , int vertices)
{
	for(int i = 0;  i < vertices; i++ )
	{
		cout << "Adjacency list of vertex " << i << "\nHead";
		for(auto j : list[i])
		{
			cout << "->" << j ;
		}
		cout << "\n";
	}
}

int main()
{
	int Vertices = 4;

	// Array of vector which store elements connected to the vertices
	vector <int > list [Vertices];
	addEdge(list , 0 , 1);
	addEdge(list , 0 , 2);
	addEdge(list , 0 , 3);
	addEdge(list , 1 , 2);
	addEdge(list , 2 , 3);

	//Print nodes in Graph
	PrintGraph(list , Vertices);
	return 0;  

}