

// C ++ Program To search an element at given array 
// Binary Search Recursive Implementation

#include <iostream>
// l = lower or starting  index
// h = higher or ending index

int Recursive_Binary_search(int l, int h , int x, int *arr)
{
    if( l <= h)
    {
        int mid = (l + h)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            return Recursive_Binary_search(mid + 1 , h , x, arr);
        }
        else
        {
            return Recursive_Binary_search(l , mid - 1, x ,arr);
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
    int result = Recursive_Binary_search(0,n-1, x, arr);

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