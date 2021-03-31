#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
	int data;
	Node *left ,*right;
	Node(int data)
	{
		this -> data = data;
		left = right = NULL;
	}
} ;

void Level_order_traversal(Node *temp)
{
	queue <Node *> q;
	cout << temp -> data << " ";
	q.push(temp);
	while(q.empty() == false)
	{
	    
		temp = q.front();
		q.pop();
		if(temp -> left)
		{
			cout << temp -> left -> data << " ";
			q.push(temp -> left);
		}
		if(temp -> right)
		{
			cout << temp -> right -> data << " ";
			q.push(temp -> right);
		}
	}
}

int main()
{
	Node *root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right =  new Node(5);

    Level_order_traversal(root);
   
    return 0;
}