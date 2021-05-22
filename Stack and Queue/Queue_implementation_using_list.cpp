//Queue using Linked List:

#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* link;
};

Node* front = NULL;
Node* rear = NULL;

void enque(int data){
	Node* nf = new Node();
	if(rear==NULL){
		front = nf;
		rear = nf;
		nf->data = data;
	}else{
		rear->link = nf;
		rear = nf;
		nf->data = data;
	}
}

void deque(){
	if(front==NULL){
		cout<<"EMPTY QUEUE"<<endl;
	}else{
		Node* temp = front;
		front = front->link;
		if(front==NULL){
			rear= NULL;
		}
		delete temp;
	}
}

void traverse(){
	Node* temp = front;
	while(temp!=rear){
		cout<<temp->data<<endl;
		temp = temp->link;
	}
}

int main(){
	enque(5);
	enque(6);
	enque(7);
	enque(8);
	enque(9);
	traverse();
	cout<<"AFTER TRAVERSAL"<<endl;
	deque();
	traverse();
}
