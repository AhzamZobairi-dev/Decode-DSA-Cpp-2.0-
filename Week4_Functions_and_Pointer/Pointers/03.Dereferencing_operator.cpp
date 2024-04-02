//Pointers

#include <iostream>
using namespace std;

int main()
{
    int x=1;
    int *p = &x;
    cout << x << endl;
    
    *p=6;
    cout << *p << endl;     //6
    cout << x << endl;      //6

    x=10;
    cout << *p << endl;     //10
    cout << x << endl;      //10

    *p=100;
    cout << *p << endl;     //100
    cout << x << endl;      //100
    
    return 0;
}