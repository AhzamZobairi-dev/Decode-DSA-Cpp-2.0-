#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    int *ptr1= &a;
    int *ptr2 = &b;
    
    cout << *ptr1 + *ptr2 << endl << endl;

    cout << "Another ROUND using pointer to take input" <<endl;
    cout << "Enter first number : ";
    cin >> *ptr1;
    cout << "Enter second number : ";
    cin >> *ptr2;

    cout << a + b << endl;

    int x =5,y =50;
    int *ptr3=&x, *ptr4=&y;
    cout << *ptr3 << " " << *ptr4 << endl;
    return 0;
}