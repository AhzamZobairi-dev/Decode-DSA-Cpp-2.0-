/*
Ques : Take 3 positive integers input and print
the greatest of them.
*/


#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter First number : ";
    cin >> a;

    cout << "Enter Second number : ";
    cin >> b;

    cout << "Enter Third number : ";
    cin >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << "Greatest number is first : " << a;
        }
        else        // means c > a
        {
            cout << "Greatest number is third : " << c;
        }
    }
    else            // this means else if(b > a )
    {
        if(b > c)
        {
            cout << "Greatest number is second : " << b;
        }
        else        // c > b
        {
            cout << "Greatest number is third :" << c;
        }
    }

    return 0;                                                           
}