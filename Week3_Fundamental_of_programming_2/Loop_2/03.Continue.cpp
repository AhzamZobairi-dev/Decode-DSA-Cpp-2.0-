// WAP to print odd number between 1 and 100

#include <iostream>
using namespace std;

int main()
{
//Simple method to print odd number
    cout << endl << "Method 1" << endl;
    for(int i=1; i<=100 ; i++)
    {
        if( i%2 !=0)    cout << i << endl;
    }

//Method 2 using continue statement
    cout << endl << "Method 2 with continue statement" << endl;
    for(int i=1; i<=100 ; i++)
    {
        if( i%2 ==0)    continue;    
        cout << i << endl;
    }
/*
Here the loop starts with (i = 1). And iterate through the loop till (i <= 100). Inside the for-loop
when (i%2==0), then 'continue' inside of if-statement will be executed, this means the control will 
go back to for-loop without executing "cout << i << endl;". And when if-condition is false only then 
cout statement is executed. 

continue -- skips the current iteration and move to next iteration
*/
    return 0;
}