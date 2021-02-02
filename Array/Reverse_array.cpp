// C++ Program to reverse the array elements

// Approach - By swapping the the elemets

#include <iostream> 
using namespace std;

// Reverse the array
void reverse_array(int Arr[] , int N)
{
	int temp = 0;
	int i = 0;
	int l = N-1;
	while(i <= l)
	{
       temp = Arr[i];
       Arr[i] = Arr[l];
       Arr[l] = temp;
       i++;
       l--;
	}

}

// Display the arry elements
void Display_array(int Arr[] ,int N){
	for(int i = 0; i < N ; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";

}

int main()
{
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int n  = sizeof(arr)/sizeof(arr[0]);

// Dsiplay the array elements
Display_array(arr , n);

// Call to reverse function
reverse_array(arr , n);

//Display the array
Display_array(arr , n);
return 0;
}


// Time complexity  : O(n)
