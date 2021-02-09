
// C++ program to insert an node in a sorted linked list whose data value is given such that it remain sorted

#include <iostream>
using namespace std;


class Node
{
public:
	int data;
	Node* next;
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
// Inserting at the beigning
void push( Node **head , int New_data)
{
	Node *temp = new Node();
	temp -> data = New_data;

	temp -> next = *head;

	*head = temp;

}

// Insert node in a sorted list
void Insert_node(Node** head , int New_data)
{
    Node *New_node = new Node();
    
    // if list is empty
     if(*head == NULL)
    {
        New_node -> data = New_data;
        New_node -> next = *head;
        *head = New_node;
        
    }
    // node inserted at the beignning
       else if((*head )-> data >= New_data )
    {
        New_node -> data = New_data;
        New_node -> next  =  *head;
        *head = New_node;
    
    }
    else
    {
    Node* temp =  *head;
    Node* prev = NULL;
    
   
    
    while(temp != NULL && temp -> data <= New_data)
    {
        prev = temp;
        temp = temp -> next;
    }
    
    New_node -> next = temp;
    New_node -> data = New_data;
    prev -> next = New_node;
    
    }
}



int main()
{
	Node * Head = NULL;

// 	Inserting element at the beigning
	push(&Head , 5);
	push(&Head , 4);
	push(&Head , 3);
	push(&Head , 2);
	push(&Head , 1);

	//Print the node elements
	Print_linked_list(Head);

	//Insert a node such that its data value is given
	Insert_node(&Head , 4);
	
	Print_linked_list(Head);

}