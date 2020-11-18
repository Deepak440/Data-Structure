// C ++ Program To search an element at given array

#include <iostream>

int Linear_search(int n , int x, int *arr)
{
    int i ;
    for( i = 0; i< n; i++)
    {
        if(arr[i] == x)
        {
            return i;
            d
        }
    }
    return -1;
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
    
    // Search given element in an array
    int x;          // element to be searched          
    std :: cout << "\nEnter the value element to be searched from array\n ";
    std :: cin >> x ;
    int result = Linear_search(n, x, arr);

    if(result == -1)
    {
        std :: cout << "Element not found" << std :: endl;
    } 
    else
    {
        std:: cout << " Element is found at location: " << result ;
    }
    return 0;


}