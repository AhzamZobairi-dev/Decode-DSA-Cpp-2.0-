//Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

#include <iostream>
using namespace std;

int getSquare(int n)
{
    return n*n;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Square of " << i << " is " << getSquare(i) << endl;
    }
    
    return 0;
}

