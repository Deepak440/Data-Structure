// C++ Program to reverse the linked list

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

// Reverse the linked list by reversing node data
void Reverse_linkedlist_(Node *head , int length)
{
	int arr[length];
	Node *temp = head;
	Node *temp1 = head;
	int i = 0;
	while(temp != NULL)
	{
       arr[i] = temp -> data;
       i++;
       temp = temp -> next;
	}
	i--;
	while(temp1 != NULL)
	{
		temp1 -> data = arr[i];
		i--;
		temp1  = temp1 -> next;
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

    // function call to reverse the linked list by reversing the node data
	Reverse_linkedlist_(Head , 5);
    
    // Print the reversed linked list
    Print_linked_list(Head);
    return 0; 
}	