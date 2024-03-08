/*              WE WILL DISCUSS MORE METHODS LATER IN THIS MODULE

                Swapping variable without using temporary variables

*/

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

// this is best approach 
    a = a+b;
    b = a-b;
    a = a-b;

    cout << a << " " << b;

    return 0;
}