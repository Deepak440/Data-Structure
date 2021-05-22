

// C++ Program to print the Bfs and Dfs  traversal from a given start vertices
#include <bits/stdc++.h>
using namespace std;

void Bfs(int G[][7] , int start ,int n)
{

	int i = start ,j;
	queue <int> q;

	//To keep track of visited node
	int visited[n] = {0};   // Initialised with zero

	cout << i << " ";
	visited[i] = 1;
	q.push(i);
	while(!q.empty())
	{
		i = q.front();
		q.pop();
		for( j = 1;  j < n;  j ++)
		{
		      if(G[i][j] == 1  && visited[j] == 0)
		      {
		      	cout << j << " ";
		      	visited[j] = 1;
		      	q.push(j);
		      }
		}
	}

}

// Depth first search
void Dfs(int G[][7] , int start , int n)
{
	int j;
	static int visited[7] = {0};   // static array ony once defined  
	if(visited[start] == 0)
	{
		cout << start << " ";
		visited[start] = 1;
		for( j = 1; j < n;  j ++)
		{
			if(G[start][j] ==1 && visited[j] == 0)
			{
				Dfs(G ,j, n);
			}
		}
	}
}

 

int main()
{
	// Matrrix  representation  of Graph
	int G[7][7] ={ {0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0} };
    cout << "Breadth first search order of Graph : ";               
    Bfs(G , 1 , 7);

    cout << "\n Depth first search order of Graph : ";

    Dfs(G , 1, 7);

    cout << "\n";
   
   
    return 0;
                   
}