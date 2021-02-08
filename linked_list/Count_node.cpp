

//C ++ Program to count the number of node in a given linked list

#include <iostream>
using namespace std;


// Class of Node
class Node {
public:
	int data;
	Node *next;
};

//Count number of node
int count_node(Node* p)
{
	int count = 0;
	while(p != NULL)
	{
		p = p -> next;
		count ++;
	}
	return count;
}

// Recursive function to calculate the number of count

int Recursive_count(Node *p)
{
	if(p == NULL)
	{

		return 0;
	}
	else
	{
		return Recursive_count(p -> next) + 1;
	}
}
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

    cout << "The number of node present in the list is : ";
	cout << count_node(head);
	cout << "\n";
     
    // Recursive approcach 
	Recursive_count(head);

	return 0;

}