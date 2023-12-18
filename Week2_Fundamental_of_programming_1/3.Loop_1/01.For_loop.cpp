/*          For Loop

initialization     condition      increment
    for (   int i=1 ;   i<=10       ; i++)
    {
         //code
    }

step : 
    initialize and declare variable
    Repeate
        Loop condition check
        code execution inside loop
        increment/decrement
        Repeat

*/


#include <iostream>
using namespace std;
int main() {

//Needed to print Good Morning 10 times
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;

// Since we are coding and one of its purpose is to automate repition
// using FOR loop

    for (int i=1 ; i<=10 ; i++)                 //i is variable for only inside of loop (local variable) and cant access it from outside of loop  
    {                                           // fro accessing i outsid eof loop we needed to declare it outside.
         cout << "Good Morning" << endl;
    }

/*
    initialization     condition      increment
    for (   int i=1 ;   i<=10       ; i++)
    {
         cout << "Good Morning" << endl;
    }

*/
    return 0;
}