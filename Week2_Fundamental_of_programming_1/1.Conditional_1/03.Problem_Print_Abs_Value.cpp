/*
Ques : Given an integer. Print the absolute value of that integer.

Ans: in a number line

        ..., -4, -3, -2, -1 ,0, 1, 2, 3, 4, ...

    Absolute value is given by |<number>|

    |n| = n     for all n >= 0;
        = -n    for all n < 0;

    n = 6  => |n| = |6| = 6
    n = -6 => |-6| = -(-6) = 6

*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if(num >= 0)
    {
        cout << "The absolute value is : " << num << endl;
    }
    else
    {
        cout << "The absolute value is : " << (-num) << endl;
    }
/*
Note: in the above code we doing arithmetic operations but not 
storing it in the variable (num). rather we are doing operation
and directly printing it. The value in variable remains same. 

ANOTHER APPROACH -- better

    -- we do not need multiple if or if-esle condition.
    -- when number > 0, we do not have anythings to change
    -- But when we have a negative number, we will make 
            num = -num;
        so we can use this equation in the if-condition and 
    -- when we take +ve number as input making the if-check 
       false and skipping reassignment of num = -num 
       and just print the value in variable num, prints what 
       we took as input.  
        
*/

    if(num < 0)
    {
        num = -num;
    }
    cout << "The absolute value is : " << num << "\t" << __LINE__;

    return 0;
}

