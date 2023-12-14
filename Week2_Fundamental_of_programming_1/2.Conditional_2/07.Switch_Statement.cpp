/*
                            SWITCH STATEMENT

-- Alternative to if-else statement

    switch ( integer expression)
    {
        switch(expression) {
        case constant1:
            // code block
            break;
        case constant2:
            // code block
            break;
        default:
            // code block
    }
*/

/*
    Ques : Write a program to input week number(1-7)
    and print day of week name using switch case.

    1 --> monday        7 --> Sunday
*/

#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout << "Enter day number :";
    cin >> x;

    switch(x)
    {
        case 1:
            cout << "Monday" << endl;
        case 2:
            cout << "Tuesday" << endl;
        case 3:
            cout << "Wednesday" << endl;
        case 4:
            cout << "Thrusday" << endl;    
        case 5:
            cout << "Friday" << endl;
        case 6:
            cout << "Saturday" << endl;
        case 7:
            cout << "Sunday" << endl ;
    }
/* 
Issue with switch statement is when a case is checked
it does not bother to check any further case and executes 
code contained in it.

    For ex:- if (case 5) is true then code block inside it
             will get excecuted but it will not stop there 
             it will further excecute code blocks inside 
             case 6 and case 7 as well without checking it
             

OUTPUT 
Enter day number :5
Friday
Saturday
Sunday


SOLUTION -- to solve this unwanted excecution we will use
            break keyword
*/
    
    switch(x)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thrusday" << endl;    
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl ;
            break;
    }

/*
OUTPUT --
Enter day number:1
Monday

If we give an input that does not covered in any case i.e(invalid input)
can be covered using default case.

*/
    switch(x)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thrusday" << endl;    
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl ;
            break;
        default:
            cout << "Invalid Input";
    }

/*
OUTPUT --
Enter day number :8
Invalid Input
*/
    return 0;
}