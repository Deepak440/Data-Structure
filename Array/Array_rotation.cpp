
// C++ Program to Rotate array of N element by D elements
// Write to function to implement both left or right rotation

#include <iostream>
#define N 6      // Macro N = 6  number of array element
#define D 2      // Macro D = 2  number of elemnt to be rotated
#define endl "\n"

void left_rotate(int arr1[] , int n , int d)
{
    while(d--)
    {
    int temp = arr1[0];
    for(int i = 0; i < n - 1; i++)
    {
        arr1[i] = arr1[i + 1];
    }
    arr1[n-1] = temp;
    }

}

void right_rotate(int arr1[] , int n, int d)
{
     while(d--)
    {
    int temp = arr1[n-1];
    for(int i = n-1; i >= 1 ; i--)
    {
        arr1[i ] = arr1[i-1];
    }
    arr1[0] = temp;
    }

}

void Display_element(int arr[] , int n)
{
    for(int i = 0; i < n; i++)
    {
        std :: cout << arr[i] << " ";
    }
    std :: cout << endl;
}

int main()
{
    int arr[N];

    // Take input elements
    std :: cout << "Enter the elements : " << endl;
    for(int i =0; i < 6; i++ )
    {
        std :: cin >> arr[i];
    }

    // Call funciton for left rotation
    left_rotate(arr , N ,D);
    std :: cout << "Left rotation of elements : ";
    Display_element(arr ,N);
    
    

    //call funtion for right rotation
    right_rotate(arr , N ,D);
    std :: cout << "Right rotation of elements : ";
    Display_element(arr , N);

    return 0;
}