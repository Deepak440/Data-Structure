// C++ program for deleting the first node , last node and an intermediate node of a linked list

#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *next;
};

// Function to add the elements from the beigning
void push_node(Node **head , int new_data)
{
	Node *new_node = new Node();
	new_node -> data = new_data;
	new_node -> next = *head;

	*head = new_node;
}

// Function to delete first node of list
void delete_fist_node(Node **head)
{
	if(*head == NULL)
	{
		cout << "No element removed ! List is already empty\n";
	}
	Node *temp = *head;
	*head = (*head) -> next;
    // Free the memory occupied by the first node;
    delete temp ;
}

//Function to Deleting_last_node
void Deleting_last_node(Node ** head)
{
    Node *temp =  *head;
    Node *prev = NULL;
    
    while(temp-> next != NULL)
    {
        prev = temp;
        temp  = temp -> next;
    }
    prev -> next = NULL;
    delete temp;;
    return ;
}

// Function Delete_given_node
void Delete_given_node(Node **head , int node_value)
{
	Node *temp = *head;
	Node *prev = NULL;

     // if fist node contain the node_value
	if(temp ->data == node_value && temp != NULL)
	{
		*head = temp -> next;
		delete temp;
		return ;
	}
	else{

	while(temp != NULL && temp->data != node_value){
		prev = temp;
		temp = temp -> next;

	}
	if(temp == NULL)
	{
		cout << "No element Found\n";
		return ;
	}

	prev -> next =  temp -> next;

	delete temp;
	return;
}
}


// Printing the elments of a linked list
void Print_linked_list(Node *temp)
{
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n";
}
int main()
{
	Node *Head = NULL;
    
    // Adding node elments from the beigning
	push_node(&Head , 1);
    push_node(&Head , 2);
    push_node(&Head , 3);
    push_node(&Head , 4);

    //Print the elements of a list
    Print_linked_list(Head);

    //Deleting the  first node 
    delete_fist_node(&Head);
  
    
    // Delete last node
    Deleting_last_node(&Head);
        
    // Delete a given node in the linked list
    Delete_given_node(&Head , 2);


    //Print list after deletion
    cout << "Linked list after performing above operation\n";
    Print_linked_list(Head);
    return 0;


}