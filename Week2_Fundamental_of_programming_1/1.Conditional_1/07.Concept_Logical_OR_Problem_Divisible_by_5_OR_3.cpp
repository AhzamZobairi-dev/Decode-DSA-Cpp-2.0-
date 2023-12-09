 /*
Ques : Take positive integer input and tell if it is divisible by 5 or 3.


LOGICAL OR -- a OR b -- when any or both a or b is high then output will be high
              a || b 

https://sites.millersville.edu/bikenaga/math-proof/truth-tables/truth-tables17.png
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if ( num % 3 == 0 || num % 5 == 0)  // (num >= 100 && num <= 999)
    {
        cout << "Divisible by 3 or 5";
    }
    else
    {
        cout << "Not divisible by 3 nor 5";
    }
    return 0;                                                           
}

/*
When using || in if-statement any one of condition1 or condition2
or both are TRUE then the whole condition is true and BLOCK1 get 
executed.

        if( condition1 && condition2)
        {
            ...BLOCK1
        }   


IMPORTANT NOTES

IMPORTANT NOTES:

    if( condition1 && condition2)
        {
            ...BLOCK1
        }


    IF condition1 is already TRUE then compiler wont bother to check 
    for condition 2

*/