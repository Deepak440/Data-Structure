//Sorting of array by bubble sort
#include <iostream>

void Print_Array(int n1 ,int* arr1)
{
    for(int i = 0; i < n1; i++)
    {
    std :: cout << arr1[i] << " ";
    }
}

void Bubble_sort(int n , int arr[])
{
    int count ;
	for(int i = 0;  i < n-1 ; i++)
	{
	    count = 0;
		for(int j = 0; j < n-1-i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
				count ++;
			}
		}
		if(count == 0)
		{
		    break;
		}
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
    std :: cout << "Array elements\n";
    Print_Array(n ,arr);
    std::cout << "\n";
    
    // Call to the Sorting function 
    Bubble_sort(n , arr);
     
    // Print updated array
    std :: cout << "Sorted array\n";
    Print_Array(n ,arr);

    return 0;

}

// Worst case Time complexity : O(n*n)
// Best case Time complexity : O(n)  When elements are already sorted