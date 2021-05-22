

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



int main()
{
	Node * Head = NULL;

	// Inserting element at the beigning
	push(&Head , 3);
	push(&Head , 1);

	//Insert element after given node
	insert_after(Head , 2);

	delete_fist_node(&Head);
    Deleting_last_node(&Head);

	Delete_given_node(&Head , 2);
	

	//Inserting at the end
	 append(&Head , 4);
	Print_linked_list(Head);

}