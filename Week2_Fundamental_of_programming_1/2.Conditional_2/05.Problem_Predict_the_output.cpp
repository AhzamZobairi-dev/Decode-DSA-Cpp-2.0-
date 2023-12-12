#include<iostream>
using namespace std;

int main()
{
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30 ;
/*
    Need to solve the equation in parenthesis
     x = (5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30)  

      condition ? true : false 
        5 > 8   ? 10   : 1 != 2 < 5 ? 20 : 30

    When we look closely we can observe in the false condition we have
    another ternary operator (in parenthesis)
    5 > 8 ? 10 : [1 != 2 < 5 ? 20 : 30]
                 condition    ? true : false
                1 != 2 < 5    ? 20   : 30

How to solve this i.e from right to left or left to right
-- as discussed we have only 2 case where we solve right ot left

    1. Assignment       -- like p += q += r
    2. Ternary operator -- like above

Here we will solve [1 != 2 < 5 ? 20 : 30] -- part first 

Solving Right part first -- [1 != 2 < 5 ? 20 : 30]

    1 != 2 < 5 

    -- from operator precedence 
            > , >= , < , <=    >>>>>(more than)  == , !=
    
    1 != 2 < 5      => 2 < 5 which is true i.e 1
    1 != 1          => 1 == 1 making the condition false i.e 0

    then net value of [1 != 2 < 5 ? 20 : 30] when condition is 
    false is 30.

Now solving Left part   
    (5 > 8 ? 10 : 30)   => replaced right part with 30

    5 > 8               => as 5<8 this conditon is false

    the net value if the operator is 30    
*/    
    
    
    cout << "Value of x : " << x;
    return 0;
}

// OUTPUT: value of x : 30
