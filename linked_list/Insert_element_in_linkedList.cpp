// C++ Program to insert node in the beigning , after a node and at the end

#include <iostream>
using namespace std;

class Node{
    public:
	int data;
	Node * next;
};
// Function to print all elements of linked list
void Print_linked_list(Node *temp)
{
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}
// Inserting at the beigning
void push( Node **head , int New_data)
{
	Node *temp = new Node();
	temp -> data = New_data;

	temp -> next = *head;

	*head = temp;

}

// Inserting at the end
void append(Node **head , int New_data)
{
	Node *new_Node = new Node();
	Node *temp = *head;
    new_Node -> data = New_data; 
	new_Node -> next = NULL;

	//If it is first element
	if(*head == NULL)
	{
		*head = new_Node;
		return ; 
	}

	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	temp -> next = new_Node ;
	
}

void insert_after(Node *prev , int data)
{
	Node *new_node = new Node();
	new_node -> next =  prev -> next ;
	new_node -> data = data;
	prev -> next = new_node;


}

int main()
{
	Node * Head = NULL;

	// Inserting element at the beigning
	push(&Head , 3);
	push(&Head , 1);

	//Insert element after given node
	insert_after(Head , 2);

	

	//Inserting at the end
	append(&Head , 4);
	Print_linked_list(Head);

}