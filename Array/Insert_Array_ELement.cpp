// C ++ Program To insert Element at given poistion

#include <iostream>

void Print_Array(int n1 ,int* arr1)
{
    for(int i = 0; i < n1; i++)
    {
    std :: cout << arr1[i] << " ";
    }
}
void Insert_element(int &n1, int valu, int pos , int* arr2)
{
    for(int i = n1; i > pos; i-- )
    {
        arr2[i] = arr2[i-1];
    }
    arr2[pos]  = valu;
    n1++;
}

int main()
{
    int arr[10]  = {};

    //initial size of an array
    int n = 5;
    std :: cout << "\nEnter the elements of array" << std :: endl;
    for(int i =0; i < n; i++)
    {
        std :: cin >> arr[i];
    }

    // Print array elements
    Print_Array(n ,arr);

    //Insert element at specific Poistion
    int value, pos;
    std :: cout << "\nEnter the value and position of element respectively\n ";
    std :: cin >> value >> pos;
    Insert_element(n, value , pos , arr);
     
    // Print updated array
    Print_Array(n ,arr);

    return 0;


}