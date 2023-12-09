/*
Ques : Take positive integer input and tell if it
is divisible by 5 or 3 but not divisible by 15.

*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

//Using multiple || and && we can write as below with correct parenthesis
    if ( (num % 3 == 0 || num % 5 == 0) && num%15 != 0)
    {
        cout << "Divisible by 3 or 5 but not 15";
    }
    else
    {
        cout << " Divisible by 15";
    }

// Using Nested if-else statement, but both way of writing conveys same meaning
    if ( num % 3 == 0 || num % 5 == 0 )
    {
        if (num%15 != 0)
        {
            cout << "Divisible by 3 or 5 but not 15";
        }
        else
        {
            cout << " Divisible by 15";
        }
    }
    else
    {
        cout << " Divisible by 15";
    }

    return 0;                                                           
}

/*
NOTE -- && CAN BE TRANSLATED AS MULTIPLE IF-ELSE CONDITIONS

*/