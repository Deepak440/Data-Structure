

// C++ Program for the implemntation of queue with the help of array

#include <iostream>
using namespace std;

// class for queue
class Queue
{
public:
	int size;
	int front;
	int rear;
	int *Q;
};

// Inserting element in the queue
void Enqueue(Queue *q, int x)
{
	if(q -> rear == q -> size - 1)
	{
		cout << "Queue is full" << "\n";
	}
	else
	{
		q -> rear ++;
		q -> Q[q -> rear] = x;
	}
}

// Deleting elment from the queue
int Dequeue(Queue *q)
{
	int x  = -1;
	if(q -> front == q -> rear)
	{
		cout << "Queue is empty" << "\n";
	}
	else
	{
		
		x  = q -> Q[q -> front];
		q -> front ++;
	}
	return x;
}

// Display the elements of queue

void Display(Queue q){
	for(int i = q.front; i <= q.rear; i++)
	{
		cout << q.Q[i] << " ";
	}
	cout << "\n";
}


int main()
{
	Queue q;

	// Creat the queue
	cout << "Enter the size of Queue" << "\n";
	cin >> q.size;
	q.Q = new int[q.size];
	q.front = -1;
	q.rear = -1;

	// Inserting element in the queue
	Enqueue(&q , 1);
    Enqueue(&q , 2);
	Enqueue(&q , 3);
	
	// Deleting element from the queue
	cout << Dequeue(&q) << "\n";
	cout << Dequeue(&q) << "\n";
	// Display the elment
	Display(q);

	return 0;
 
}