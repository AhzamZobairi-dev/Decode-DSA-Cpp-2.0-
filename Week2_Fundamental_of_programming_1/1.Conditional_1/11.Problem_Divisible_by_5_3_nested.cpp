/*
Ques : Take positive integer input and tell if it
is divisible by 5 and 3.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if ( num % 5 == 0 )  
    {
        if(num % 3 == 0)
        {
            cout << "Divisible by both 3 and 5";
        }
        else
        {
            cout << "Condition not matching";
        }
    }
    else
    {
        cout << "Condition not matching";
    }

    return 0;                                                           
}