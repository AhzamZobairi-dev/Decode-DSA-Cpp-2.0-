/*
Ques : Take 3 numbers input and tell if they
can be the sides of a triangle.


Solution 

    For a triangle it it necessary that sum of any two side 
    must be greater than third side.
    Let a,b,c be side of triangle.

    a + b > c
and b + c > a
and c + a > b   
*/

#include <iostream>
using namespace std;

int main()
{   
    int a,b,c;
    cout << "Enter first Side : ";
    cin >> a;
    cout << "Enter second side : ";
    cin >> b;
    cout << "Enter third side : ";
    cin >> c;

    if ( (a + b > c) && (b + c > a) && (c + a > b) )
    {
        cout << a <<","<< b <<","<< c <<" " << "Can be sides of triangle";
    }
    else{
        cout << "Invalid triangle";
    }
    return 0;                                                            
}