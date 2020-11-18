
// C ++ Program to Write Dynamic array Allocation
#include <iostream>


int main()
{
    // Initialize pointer to NULL
    int *p  =  0;

    // p is pointing to a block of memory on heap
    // Requesting block of elements of size 10
    p = new int[10];       

    int n;
    std :: cout << "Enter the Length of the Array block " << std :: endl;
    std :: cin >> n;

    // Input from Keyboard
    std :: cout << "Enter the Elements of array" << std :: endl;
    for(int i = 0; i < n; i++)
    {
        std :: cin >> p[i];
    } 

    // Displaying of array element
    std :: cout << "\nElements are :";
    for(int i = 0; i < n; i++)
    {
        std :: cout << p[i] << " "; 
    }
    std :: cout << "\n\n";
     
    // Free block of element on heap 
    delete []p;
    return 0;
}
