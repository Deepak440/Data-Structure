//Traversal of singly linked list
            // Iterative 
            // Recursive

#include <iostream>
using namespace std;

// Create a class node

class Node{
public:
	int data;
	Node *next;
};

// Function to print all elements of linked list
void Print_linked_list(Node *temp)
{
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n";
}

// Recursive Function to print all elments of list
void Recursive_Print_List( Node *p )
{
	if(p != NULL)
	{
	cout << p -> data << " ";
	Recursive_Print_List( p -> next);
}}

int main()
{
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;

    // Create 3 nodes at heap memory  
 	head = new Node();
	second = new Node();
	third = new Node();
    // Starting Node
	head -> data = 5;
	head -> next = second;

	second -> data = 10;
	second -> next = third;

    // Last node 
	third -> data = 15;
	third -> next = NULL;

	Print_linked_list(head);

	Recursive_Print_List(head);

}