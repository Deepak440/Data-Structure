// C ++ Program To delete element at given poistion

#include <iostream>

void Print_Array(int n1 ,int* arr1)
{
    for(int i = 0; i < n1; i++)
    {
    std :: cout << arr1[i] << " ";
    }
}
void Delete_element(int &n1,int val, int *arr1)
{
    int i;
    for(i = 0; i < n1; i++)
    {
        if(arr1[i] == val)
        {
            break;
        }
    }

    if(i < n1)
    {
        for(int j = i ; j < (n1 -1); j++ )
        {
            arr1[j]  = arr1[j +1];
        }
        n1--;
    }
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

    //Delete element from  an array
    int value;          // element to be deleted          
    std :: cout << "\nEnter the value element to be deleted from array\n ";
    std :: cin >> value ;
    Delete_element(n, value, arr);
     
    // Print updated array
    Print_Array(n ,arr);

    return 0;


}