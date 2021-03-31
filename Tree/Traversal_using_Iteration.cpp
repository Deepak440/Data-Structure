// C++ Program to traverse the BInary tree

#include <iostream>
#include <stack>
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


// Post order traversal
void printPostorder( Node *root)
{
    
    stack <Node *> st;
    Node*temp = root;
    Node * temp2 ;
    
    while(temp != NULL || st.empty() == false)
    {
        if(temp != NULL)
        {
            st.push(temp);
            temp = temp -> left;
            
        }
        else
        {
            temp2 = st.top();
            st.pop();
            if(temp2 > 0)
            {
                st.push(-temp);
                temp = ((Node *)temp2) -> right;
            }
            else
            {
                cout << ((Node *)temp) -> data << " ";
                temp = NULL; 
            }
        }

}

// Preorder traversal 
void printPreorder( Node *root)
{
	stack <Node *> st;
	Node *temp = root;

	while(temp != NULL || st.empty() == false)
	{
		if(temp != NULL)
		{
			cout << temp -> data;
			st.push(temp);
			temp = temp -> left;
		}
		else
		{
		    
		    temp = st.top();
		    st.pop();
		    temp = temp -> right;
		    
		
		}
	}


}

// Inorder traversal
void printInorder(Node *root)
{
    stack <Node *> st;
    Node*temp = root;
    
    while(temp != NULL || st.empty() == false)
    {
        if(temp != NULL)
        {
            st.push(temp);
            temp = temp -> left;
            
        }
        else
        {
            temp = st.top();
            st.pop();
            cout << temp -> data <<  " ";
            temp = temp -> right;
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

    // Preorder Traversal
   cout << "Preorder traversal of binary tree\n";
    printPreorder(root);

    //Inorder Traversal 
    cout << "Inorder traversal of binary tree\n ";
    printInorder(root);

    //Postorder Traversal
    cout << "Postorder traversal of binary tree\n";
    // printPostorder(root);

    return 0;

}