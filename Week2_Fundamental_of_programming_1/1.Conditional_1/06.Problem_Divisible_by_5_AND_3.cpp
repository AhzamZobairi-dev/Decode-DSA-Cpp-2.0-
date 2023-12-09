/*
Ques : Take positive integer input and tell if it is divisible by 5 and 3.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if ( num % 5 == 0 && num % 3 == 0)  //condition for checking if input number is a 3 digit number (num >= 100 && num <= 999)
    {
        cout << "Divisible by both 3 and 5";
    }
    else
    {
        cout << "Not divisible by both 3 and 5";
    }

    return 0;                                                           
}

/*
Note : - we can use a simple conditon in if-statement
         if(num  % 15 == 0) which is same as above

OR, 
    we can use nested if-else as well 
    if(num % 5 == 0)
    {
        if(num % 3 == 0)
        {
            cout << "Divisible by 3 and 5"
        }
    }
    else
    {
        cout << "Not divisible by both 3 and 5"
    }
*/