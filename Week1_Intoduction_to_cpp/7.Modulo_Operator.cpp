/*
Example : Take two integers input, a and b : a>b, and find the
remainder when a is divided by b.
*/


#include<iostream>
using namespace std;

int main()
{
/* 
Instead of using modulo operator we will first try using general
mathematical formula to calculate the remainder
    
    DIVIDENT = DIVISOR * QUOTIENT + REMAIDER
        a    =    b    *    q     +     r

For Remainder,
    REMAINDER = DIVIDENT - DIVISOR * QUOTIENT
        r     =    a     -    b         q    

We have here given is 
    Divident = 10
    Divisor = 3

To find the Quotient(int) we can take both divisor and divident as 
int and divide it which will give us quotient as opearion between 
two int will always give int as DISCUSSED IN 6.DataType_Float.cpp

        10/3 = 3  not 3.33
So, 
        Quotient = Divident (int) / Divisor (int)
*/
    int a = 11;     // Divident
    int b = 3;      // Divisor
    int q = a/b;    // Quotient 
    int r;          // Remainder

    r = a - (b * q);
    cout << "Remainder : " << r << endl;


//           USING MODULO OPERATOR

    int mod = a % b;
    cout << "Remainder : " << mod << endl;

    cout << 25 % 4 << endl;

/*
When,
    1.  Divident >  Divisor  then , Remainder = Divident - Divisor * Quotient
    2.  Divident == Divisor then, Remainder = 0 as Quotient == 1
    3.  Dident < Divisor then, Remainer = Divident as Nearest perfect Quotient == 0
*/

    int a1 = 5;
    int b1 = 6;
    cout << a1 % b1 <<endl ;        // o/p - 

// When, 
//  4.      a % (-b) = a % b
    cout << 10 % (-3) <<endl ;      // == 10%3 => o/p - 1

//  5.      (-a) % b = - (a % b)
    cout << (-10) % 3 <<endl ;

//  6.      (-a) % (-b) = (-a) % b = - (a % b)
    cout << (-10) % (-3) <<endl ;      

    return 0;
}

/*
Remainder : 2
Remainder : 2
1
5
1
-1
-1
*/

