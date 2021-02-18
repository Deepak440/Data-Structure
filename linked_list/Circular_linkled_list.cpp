
// C++ Program for the singly circular linked list traversal both iterative and recurssive

#include <iostream>
using namespace std;

class Node
{
    public:
    
	int data;
	Node* next;
};
// Gloabal pointer
Node* head;

// Create the circular linked list
void Create_list(int arr[] , int n)
{
	Node* temp ;
	Node* last;
	head = new Node();
	head -> data = arr[0];
	head -> next = head;
	last =  head;

	for(int i = 1; i < n; i++)
	{
		temp = new Node();
		temp -> data = arr[i];
		temp -> next = last -> next;
		last -> next = temp;
		last = temp;
	}
}

// traversal of linked list => Iterative way

void Display(Node *p)
{
	p = head;
	do
	{
		cout << p -> data << " ";
		p = p -> next; 

	}while(p != head);
	cout << "\n";
}

// Recursive function for the traversal 

void Display_R(Node *p)
{
	static int flag = 0;
	if(p != head || flag == 0)
	{
		flag = 1;
		cout << p -> data << " ";
		Display_R(p -> next);
	}
}

int main()
{
	
	int ar[] = {1,2,3,4,5};
	int n  = sizeof(ar) / sizeof(ar[0]);

    // Create a circular linked list
    Create_list(ar , n);

    // Display nodes values

    Display(head);

    // Display with recurrsion
    Display_R(head);
    return 0;
 


}