/*
1. Take 2 integers input and print the greatest of them
    Input 1: a = 5 b = 7
    Output 1: second number 7 is the largest.
    Input 2: a = 12 b = 1
    Output 2 : first number 12 is the largest.
    Note : It is ensured that the two numbers will be different.
*/


#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter First number : ";
    cin >> x ;

    cout << "Enter Second number : ";
    cin >> y ;

    if(x > y)
    {
        cout << "First Number " << x << " is the largest";
    }
    else
    {
        cout << "Second Number " << y << " is the largest";
    }

    return 0;
}