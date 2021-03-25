
// c++  Program for the implementation of Stack using array 

#include <iostream>
using namespace std;


// Stack class
class Stack{
    public:
    int size;
    int top;    // Pointing to the top of the Stack
    int *s;    // Pointer to the array
};

// Create a Stack
void create(Stack *st)
{
    int size;
    cout << "Enter the size: ";
    cin >> st -> size;
    st -> top = -1;
    st -> s = new int[st -> size];
    
}

// Display satck
void dispaly(Stack st)
{
    int i = 0;
    for(i = 0; i<= st.top; i++)
    {
        cout << st.s[i] << " ";
    }
    cout << "\n";
}

// Insert elemnet into the stack
void push(Stack *st , int data)
{
    if(st -> top == (st->size - 1))
    {
        cout << "Overflow\n";
    }
    else
    {
        st -> top ++;
        st -> s[st -> top] = data;   // TOp of stack is assigned a new value
        
    }
}
// Delete element from the stack
int pop(Stack *st)
{
    int x = -1;
    if(st -> top == -1)
    {
        cout << "Underflow\n";
    }
    else
    {
        x = st ->s[st -> top];
        st -> top --;
    }
    return x;
}

// Display a specific value of stack

int peek(Stack st , int pos)
{
    int x  = -1;
    if(st.top - pos +1 < 0)
    {
        cout << "Invalid" << "\n";
    }
    else
    {
        x  = st.s[st.top - pos + 1];
    }
    return x;
}
//Check the stack empty or not
int IsEmpty(Stack st)
{
    if(st.top  == -1)
    {
        return 1;
    }
    return 0;
}

// Check stack full or not
int IsFull(Stack st)
{
    if(st.top == (st.size - 1))
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Stack st;
    // Create stack
    create(&st);
          
    // Push value in the stack
    push(&st , 10);
    push(&st , 20);
    push(&st , 30);    
    push(&st , 40);
    push(&st , 50);
    // Display elements of stack
    dispaly(st);
    
    // Pop elemnt from stack
    cout << pop(&st) << " is deleted from the stack\n";
    
    // Display specific
    cout << peek(st ,2 ) << "\n"; 
    

    return  0;
    
}