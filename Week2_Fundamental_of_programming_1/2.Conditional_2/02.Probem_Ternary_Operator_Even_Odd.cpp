/*
Compact form of if-else condition

TERNARY Operator

    expression1 ? expression 2 : expression 3

    condition ? TRUE : FALSE
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a Number : ";
    cin >> x;

// Using if-else condition 
    if(x%2 == 0)
        cout << "Even";
    else
        cout << "Odd";

// Using Ternary operator
    (x%2==0) ? cout << "Even" : cout << "Odd" ;
    
    return 0;        
}