#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

/*
USING ONLY IF CONDITION
we are using 2 if condition
    -- First to check if number is divisible by two
    -- Second to check number is not divisible by two

Irrespective of first if conditon is true or not, CPU will spend its resoruce 
to run all the if statement related or not and check if the condition provided
in those if-satement are true or not.
*/ 

    if(x%2 == 0)
    {
        cout << x << " is an even number";
    }
    if(x%2 != 0)
    {
        cout << x << " is an odd number";
    }

/*
Oftenly we have only 2 outcome(Ture or False) as here. Like a natural number can be 
odd or even there is no other outcome.

we have IF ELSE statement, when first part i.e if(condition) is true the else part
will be skipped & will not get executed. But if-statement is false, else part will
be executed directly as there is only two supposed outcome. 

So will only have one condition to check that resides in if-statement and depending 
on the result we will execute the respective part
    -- When if-statement is true, this executes the if-part and the if-else block exits
    -- When if-condition is false, then only it executes the else-part

*/ 
    if(x%2==0)
    {
        cout << x << " is an even number";
    }
    else{
        cout << x << " is an odd number";
    }

    return 0;
}


