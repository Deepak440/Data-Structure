
// C++ Program for the implementation of Queue using Linked list

#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue
{
public:
	Node *front, *rear;
	Queue()
	{
		front = NULL;
		rear = NULL;
	}
}