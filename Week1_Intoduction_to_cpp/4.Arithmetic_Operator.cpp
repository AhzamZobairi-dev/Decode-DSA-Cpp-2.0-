#include<iostream>
using namespace std;


int main() 
{

    int a = 5;
    int b = 2;

    cout << a+b << endl;    // 7
    cout << a-b << endl;    // 3
    cout << a*b << endl;    // 10   

// When an Arithmetic operation is between 2 integer
// the will be in  integer as well.
    cout << a/b << endl;    // 2 Not 2.5
// Here instead of 2.5 we will get 2 as answer and the 
//decimal part will be ignored. 

    cout << 29/10 << endl;
//To have exact result with decimal we will take a new
//data type.   

    int x = 5;
    int y = 10;
    int sum = x+y;  // using addition operator and store in variable
    int diff = x-y; // using subtraction operator and store in variable
    int div = y/x;  // using division operator and store in variable
    int product = x*y;  // using multiplication operator and store in variable

//Here all the variable we have made is of integer type.
//Meaning it can only store whole number. 
    cout << sum << endl;
    cout << diff << endl;
    cout << product << endl;
    cout << div << endl; // using a variable will not change o/p

    y = 29;
    x = 10;
    div = y/x;
    cout << div << endl; // 2

    return 0;
}

/*
OUTPUT

7
3
10
2
2
15
-5
50
2
2

*/