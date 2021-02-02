
  //  C++ program to insert an element in a sorted array

#include <iostream>
using namespace std ;

void insert_element_in_sortedArray(int Arr[] , int &n , int value)
{
	for(int i = n - 1;  i >= 0; i--)
	{ 
		if(Arr[i] > value)
		{
		  Arr[i+ 1] = Arr[i];
		}
		else
		{
			Arr[i + 1] = value;
			n++;                       // Array size increases
			break;
		}

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
// Sorted  Array
int Arr[] = {1,2,3,4,6,7,8,9};
int n = sizeof(Arr)/sizeof(Arr[0]);
// Elenent to be inserted in the array
int insert_element = 5;

//Display the array
Display_array(Arr , n);

//Insert array element
insert_element_in_sortedArray(Arr , n , insert_element);

//Display the array
Display_array(Arr , n);

return 0;
}