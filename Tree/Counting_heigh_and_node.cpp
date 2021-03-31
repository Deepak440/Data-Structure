#include <iostream>
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

// Number of Nodes in the binary tree
int Counting_Nodes(Node *n)
{
	int x ;
	int y;
	while(n!=NULL)
	{
		x = Counting_Nodes(n->left);
		y = Counting_Nodes(n-> right);
		return x +y + 1;
	}
	return 0;
}

// Height of binary tree
int Height_Btree(Node *n)
{
	int x, y = 0;
	if(n == NULL)
	{
		return 0;
	}
	if(n!= NULL)
	{
		x = Height_Btree(n -> left);
		y = Height_Btree(n -> right);

		if(x > y)
		{
			return x  +1;
		}
		else
		{
			return y + 1;
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
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    cout << "Number of nodes : " << Counting_Nodes(root) << "\n";
    cout << "Height of binary tree: " << Height_Btree(root);
   
    return 0;
}