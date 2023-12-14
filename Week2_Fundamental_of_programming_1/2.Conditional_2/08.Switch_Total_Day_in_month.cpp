/*
Ques : Write a program to input month number and
print total number of days in month using switch
case.
*/

#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout << "Enter month number :";
    cin >> x;


//  METHOD 1
    switch(x)
    {
        case 1: // jan
            cout << "31" << endl;
            break;
        case 2: // feb
            cout << "28" << endl;
            break;
        case 3: // march
            cout << "31" << endl;
            break;
        case 4: // april
            cout << "30" << endl;    
            break;
        case 5: // may
            cout << "31" << endl;
            break;
        case 6: // june
            cout << "30" << endl;
            break;
        case 7: // july
            cout << "31" << endl ;
            break;
        case 8: // aug
            cout << "31" << endl ;
            break;
        case 9: // sept
            cout << "30" << endl ;
            break;
        case 10: // oct
            cout << "31" << endl ;
            break;
         case 11: // nov
            cout << "30" << endl ;
            break;
         case 12: // dec
            cout << "31" << endl ;
            break;
        default:
            cout << "Invalid Input";
    }

/*
            METHOD 2
    WE WILL INCORPORATE ALL THE MONTH WITH SAME DAY TOGETHER
    LIKE 31 --> JAN, MAR, MAY, JULY, AUG, OCT, DEC
              1 3 5 7 8 10 12
         30 --> April, June, Sept, nov
                4  6  9 11
*/
    cout << endl << endl << "Method 2 " << endl;

    switch ((x<=7 && x%2!=0) || ( x >=8 && x %2==0))
    {
        case 1:         // when above condition is evaluated we will enter here when o/p is 1 
        cout << 31 <<endl;  //and case takes the value of x which is 1(true) here
    }
    switch ( x == 4 || x == 6 || x == 9 || x == 11)
    {
        case 1:
        cout << 30 << endl;
    }
    switch (x)          // or switch(x==2) or switch (2)
    {
        case 2:         // when value of x is 2 it will hit the case or else it will not
        cout << 28 << endl;
    }
    return 0;
}

