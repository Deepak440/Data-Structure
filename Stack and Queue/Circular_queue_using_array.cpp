
//C++ implementation of circular queue
#include <iostream>
using namespace std;

class Queue
{
public:
	int size;
	int front ;
	int rear;
	int *Q;
};

int main()
{
	Queue q;

	// Creat the queue
	cout << "Enter the size of Queue" << "\n";
	cin >> q.size;
	q.Q = new int[q.size];
	q.front = 0;
	q.rear = 0;

}