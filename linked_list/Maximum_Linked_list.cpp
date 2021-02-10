// C++ program to find the maximum element in the linked list

#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

// Inserting at the beigning
void push( Node **head , int New_data)
{
	Node *temp = new Node();
	temp -> data = New_data;

	temp -> next = *head;

	*head = temp;

}

// Function to find the maximum element in the linked list
 


int main()
{
	Node * Head = NULL;

// 	Inserting element at the beigning
	push(&Head , 5);
	push(&Head , 4);
	push(&Head , 3);
	push(&Head , 2);
	push(&Head , 1);

	// Maximum element in the linked list
	cout << Maximum_node_value(Head) <<"\n";
    return 0;
}