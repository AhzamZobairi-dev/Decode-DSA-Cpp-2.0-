/*
break  -- when it executed in loop. loop gets ended immediately.


WAP to check if a number is composite or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number  : ";
    cin >> x;

    for(int i=2; i<x ; i++)
    {
        if(x%i == 0)
        {
            cout << i << " is a composite number"<<endl;
            /* when iterating through loop, for every factor of 'n' cout will be printed but if there is one factor other 
            that 1 and number itself it is enough to say the number is a composite number
                for ex -- 12 from 2 to 11 factors are - 2,3,4,6 
                output wiil be
                          
                          12 is a composite number
                          12 is a composite number
                          12 is a composite number
                          12 is a composite number
            HINT -- IT IS BETTER TO STOP EXECUTION AS THE FIRST IF CONDITION IS EXECUTED
                 -- for this we need a break statement
            */
           break;           //loop ended
        }
    }
    return 0;
}