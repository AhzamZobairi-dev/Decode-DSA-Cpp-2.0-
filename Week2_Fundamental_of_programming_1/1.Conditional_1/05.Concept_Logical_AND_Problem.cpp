/*
Ques : Take positive integer input and tell if it is a three digit number or not.

*/

/*
    LOGICAL AND -- a && b -- when a and b both are high(other than 0) then this 
                             operator will give output as 1. Otherwise zero

https://sites.millersville.edu/bikenaga/math-proof/truth-tables/truth-tables15.png

*/




#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if ( num > 99 && num < 1000)  // (num >= 100 && num <= 999)
    {
        cout << "Three Digit Number";
    }
    else
    {
        cout << "Not a three digit number";
    }

/*
When using && in if-statement we needed to ensure both condition
needed to be TRUE, otherwise the if-block will not get excecuted

        if( condition1 && condition2)
        {
            ...BLOCK1
        }

    condition1 must be true as well as condition2    

*/

    return 0;                                                           
}

/*
IMPORTANT NOTES:

    if( condition1 && condition2)
        {
            ...BLOCK1
        }


    IF condition1 is false then compiler wont bother to check 
    for condition 2

*/