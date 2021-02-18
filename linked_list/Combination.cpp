// C++ Program to find the combination value 
// nCr = n!/(r! * (n -r)!)

#include <iostream>
using namespace std;

// nCr = (n-1)Cr + (n-1)C(r-1) 
int c1(int n , int r)
{
    if(r == 0 || r == n){
    return 1;
    }
    else{
    return c1(n-1 , r) + c1(n-1 ,r-1);
    }
}

// Factorial function
int fact(int n)
{
    int result = 1;
    int i = 1;
    while(i <=n)
    {
     result = result * i;
     i++;
    }
    return result;
}

// Iterative approch to find the combination
int c2(int n , int r)
{
    int t1, t2 ,t3 = 0;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2 * t3);
}

int main()
{
    int n ,r;
    cout << "Enter the value of n and r\n";
    
    cin >> n >> r;
    
    // Recursive function 
    cout << c1(n , r) << "\n";

    // Iterative approch 
    cout << c2(n , r) << "\n";
     return 0;
}
