
// C++ program to find the sum of the node values of linked list
//   i) Iterative approach
//   ii) Recursive approch

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
// Iterative approch
int Sum_Node(Node* temp)
{
	int sum = 0;
    while(temp != NULL)
    {
    	sum = sum + temp -> data;
    	temp = temp -> next;
    }

	return sum;
}

// Recursive approch
int Recursive_sum(Node* temp)
{
    if(temp == NULL)
    {
        return 0;
    }
    return   Recursive_sum(temp -> next) + temp -> data;
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

	// Sum of the elemnt of linked list
	cout << Sum_Node(Head) << "\n";
    cout << Recursive_sum(Head) << "\n";
}
