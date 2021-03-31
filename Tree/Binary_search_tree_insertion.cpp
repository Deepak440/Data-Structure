

// C++  Program for inserting , Searching and traversing key in binary search tree
#include <iostream>
using namespace  std;

class Node{
public:
	int data;
	Node *left ,*right;
	Node(int data)
	{
		this -> data = data;
		left = right = NULL;
	}
};

Node* Search(Node *root , int key)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root -> data == key)
	{
		return root;
	}
	else if(key < root -> data)
	{
		return Search(root -> left ,key);
	}
	else
	{
		return Search(root -> right, key );
	}
}

void Inorder(Node *root)
{
	if(root == NULL)
	{
		return ;
	}
	Inorder(root -> left);
    cout << root -> data <<  " ";
	Inorder(root -> right);
}

void Insert(Node *root , int key)
{
	Node *temp = NULL;
	while(root != NULL)
	{
		if(root -> data == key)
		{
			return ;
		}
		else if(root -> data < key)
		{
			temp = root;
			root = root -> right;
		}
		else {
			temp = root;
			root = root -> left;
		}
	}

	Node* temp2 = new Node(key);
	if(temp -> data > key)
	{
	temp ->left = temp2;	
	}
	else
	{
		temp -> right = temp2;
	}
	
	temp2 -> left = NULL;
	temp2 -> right = NULL;

}

int main()
{
	Node *root = new Node(30);
	root -> left = new Node(20);
	root -> right = new Node(40);
	root -> left -> left = new Node(10);
	root -> left -> right = new Node(25);
	root -> right -> left = new Node(35);
	root -> right ->  right = new Node(50);

	if(Search(root , 25) != NULL)
	{
		cout << "Element found" << " \n";
	}else
	{
		cout << "Element not found" << "\n";
	}

	if(Search(root , 3) != NULL)
	{
		cout << "Element found" << " \n";
	}else
	{
		cout << "Element not found" << "\n";
	}

    Inorder(root);
    cout << " \n";
    Insert(root , 33);
    Inorder(root);
	return 0;
}