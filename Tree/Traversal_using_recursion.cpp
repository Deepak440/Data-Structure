// C++ Program to for the Binary Tree traversal

#include <iostream>
using namespace std;

class Node {
public:
	
	int data;
	Node* left ;
	Node* right;
	Node(int data)
	{
		this -> data = data;
		left = right =NULL;
	}
};

// Postorder traversal
void printPostorder(Node *temp)
{
	if(temp == NULL)
	{
		return;
	}
	printPostorder(temp -> left);

	printPostorder(temp -> right);

	cout << temp -> data << " ";
}

void printPreorder(Node *temp)
{
	if(temp == NULL)
	{
		return ;
	}
	cout << temp -> data << " ";
	printPreorder(temp -> left);
	printPreorder(temp -> right);

}

void printInorder(Node *temp)
{
	if(temp == NULL)
	{
		return ;
	}
	printInorder(temp ->  left);
	cout << temp -> data << " " ;
	printInorder(temp -> right);



}

int main()
{
	Node *root  = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
	root -> left -> left = new Node(4);
	root -> left -> right = new Node(5);

	// Preorder Traversal
	cout << "Preorder traversal of binary tree \n";
	printPreorder(root);


    // Inorder Traversal
	cout << "Inorder traversal of binary tree \n";
	printInorder(root);

	
	// Postorder Traversal
	cout << "Postorder traversal of binary tree \n";
	printPostorder(root);

    return 0;
}