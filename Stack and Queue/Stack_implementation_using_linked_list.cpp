
// C++ program for the implementtaion of stack using linked list 

#include <iostream>
using namespace std;


// class
class Node{
    public:
    int data;
    Node *next;
};

// Value to be inserted
void push(Node **head, int x)
{
    Node *temp = new Node();
    if(temp == NULL)
    {
        cout << "Stack Overflow!" << "\n";
    }
    
    else
    {
        temp -> data = x;
        temp -> next = *head;
        *head = temp;
    }
}

// Value to be deleted
int pop(Node **head)
{
    int x = -1;
    Node *temp = *head;
    if(*head == NULL)
    {
        cout << "Stack underflow" << "\n";
    }
    else
    {
        *head = (*head) -> next;
        x  = temp -> data;
        delete temp;
    }
    return  x;
}

// Get a value in a stack at a specific position
int peek(Node *head , int position)
{
    Node *temp = head;
    for(int i = 0; i < position -1 && temp != NULL; i++)
    {
        temp = temp -> next;
    }
    if(temp != NULL)
    {
        return temp -> data;
    }
    else
    {
        return -1;
    }
        
}

void Display(Node *temp)
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
    Node *top = NULL;
    
    //Insert values
    push(&top , 5);
    push(&top , 4);
    push(&top , 3);
    push(&top , 2);
    push(&top , 1);
    
    // Display values
    Display(top);
    
    // Delete values
    cout << pop(&top) << "\n";
    cout << pop(&top) << "\n";
    
    // Get vlue at specific position
    cout <<"Value at 1 postion " <<peek(top , 1) << "\n";
    
    return 0;
    
}