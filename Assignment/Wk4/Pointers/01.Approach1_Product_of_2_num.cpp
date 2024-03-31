#include <iostream>
using namespace std;

int main()
{
    int a,b,prod;
    
    cout << "Enter first number : ";
    cin >> a ;
    cout << "Enter second number : ";
    cin >> b ;

    int *ptr1 = &a ;
    int *ptr2 = &b ;

    cout << "Product of " << a << " and " << b << " is " << a*b << endl;
    return 0;
}