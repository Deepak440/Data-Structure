

// C++ Program for the the conversion of infix to outfix expresssion

#include <iostream>
using namespace std;


// Stack class
class Stack{
    public:
    int size;
    int top;    // Pointing to the top of the Stack
    char *s;    // Pointer to the array
};

// Display satck
void dispaly(Stack st)
{
    int i;
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
    }
    else
    {
        x = st ->s[st -> top];
        st -> top --;
    }
    return x;
}

