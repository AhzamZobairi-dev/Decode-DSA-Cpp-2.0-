/*
Ques : Write a program to create a calculator that
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
and functions. The calculator should input two
numbers and an operator from user.
*/

#include <iostream>
using namespace std;

int main() 
{
    float x, y;
    char ch;
    cout << "Enter the problem : ";
    cin >> a >> op >> b ; 
/*
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter Second number : " ;
    cin >> y;
    cout << "Enter a operator : ";
    cin >> ch;
*/
    switch(ch)
    {
        case '+':
            cout << "Addition : Sum of " << x <<" & " << y << " is " << x + y;
            break;
        case '-':
            cout << "Subtraction : Difference of " << x <<" & " << y << " is " << x - y;
            break;
        case '*':
            cout << "Multiplication : Product of " << x <<" & " << y << " is " << x * y;
            break;
        case '/':
            cout << "Division : Ratio of " << x <<" & " << y << " is " << x / y;
            break;
    }


//        USING IF-ELSE
    cout << endl << endl << "If- else method" << endl;
    float a,b;
    char op;
    cout << "Enter the problem : ";
    cin >> a >> op >> b ;

/*  since we have to give 3 input simultaneouly
for ex -- if we have 
          
        4 9 is two different input
          
        4
        9   is also two input

        49  is one input

        4
        +
        9   this is 3 diffrent input

        4 + 9  also 3 different input

IMP --  4+9 is also 3 different input as there is a character between 2 number
    or  4 +9  or 4+ 9    
*/
    if(op == '+') cout << a+b ;
    if(op == '-') cout << a-b ;
    if(op == '*') cout << a*b ;
    if(op == '/') cout << a/b ;

    return 0;
}