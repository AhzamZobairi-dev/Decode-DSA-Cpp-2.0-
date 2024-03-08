// Swapping value of two variables using temporary variable.

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << a << " " << b << endl;

    int temp = a;
    a=b;
    b=temp;

    cout << a << " " << b;

    return 0;
}