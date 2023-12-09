/*
Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
*/

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter first marks : ";
    cout << a;
    cout << "Enter second marks : ";
    cout << b;
    cout << "Enter third marks : ";
    cout << c;

    if(a < b)
    {
        if(a < c)
            cout << " A is the smallest";
        else                                    // c < a
            cout << " C is the smallest";
    }
    else                                        // b < a
    {
        if ( b < c)
            cout << " B is the smallest";
        else                                    // c < b
            cout << " C is the smallest";
    }
    return 0;
}