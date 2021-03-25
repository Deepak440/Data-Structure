
// C++ program to check wheather the expresssion have balanced paraentesies or not

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
    }
    else
    {
        x = st ->s[st -> top];
        st -> top --;
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

int main()
{

	char exp[] = "{(a+b)*[c+d]}";
	int size_expression = sizeof(exp)/sizeof(exp[0]);

    Stack st;
    st.size  =  size_expression;
    st.top = -1;
  
  // pointer to the char array
    st.s = new char[st.size];

    // Trraversing through given expression
    int count =0;
    int fail = 0;
    for(int i = 0; exp[i] != '\0' ; i++)
    {
    	if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
    	{
    		push(&st , exp[i]);
    	}
    	else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
    	{
    		if(IsEmpty(st)){
    			count++;
    			break;}
    		char temp = pop(&st);
    		if(exp[i] == '}' && (temp == '(' || temp == '['))
    		{
    		    fail = 1;
    		    break;
    		}
    		else if(exp[i] == ']' && (temp == '(' || temp == '{'))
    		{
    		    fail = 1;
    		    break;
    		}
    		else if(exp[i] == ')' && (temp == '{' || temp == '['))
    		{
    		    fail = 1;
    		    break;
    		}
    	}
    }
    
    // to check  wheather the stack is empty or not
    if(IsEmpty(st) && count == 0 && fail == 0)
    {
        cout << "Balanced\n";
    }
    else
    {
        cout << "Not Balanced\n";
    }
    
    return  0;
    
}