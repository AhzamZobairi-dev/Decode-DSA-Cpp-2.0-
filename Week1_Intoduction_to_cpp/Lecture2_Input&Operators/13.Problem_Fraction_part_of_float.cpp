//Ques. Take float input and print the fractional part of the real number.

/*
we needed to understand
The greatest integer function is denoted by ⌊x⌋, for any real function. 
The function rounds – off the real number down to the integer less than the number

1. greatest interger function --  ⌊ x ⌋

    for ex -- 9.7 and -1.3
    1. locate your number on the number line
    -- 9.7 is betwenn 9 and 10
    -- (-1.3) is between -2 and -1
    2. the first number on left will be the fractional part
    -- for 9.7, on left side number 9 will be there so 9 is greatest integer function.
    -- for -1.3, on the left side it will -2 not -1. So greatest int func is -2.

2. fractional part            -- {x}
    -- to calculate it we have a formaula
        x-[x]   i.e number - greatest interger

    for ex--
    -- For 9.7 we have greatest int funct as 9 then acc. to formula
        -- fractinal part = x - ⌊ x ⌋ = 9.7 - 9 = .7
    
    -- for -1.3 thr fractinal part will be = x - ⌊ x ⌋
        -- (-1.3 - (-2)) = (-1.3 + 2) = 0.7

*/

#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "Enter a Floating point number : " ;    
    cin >> x;               //9.7

    int y = int(x);         //9
    if (x<0)
    {
        y -= 1;
    }
//    cout << "The Fractional part is : " << x-y;       //9.7 - 9  
// Here we are subtracting int from float which is fine as operation between float & int gives float
// but better would be to typecast y to float and then subtract 

    float z = float(y);  
    cout << "The Fractional part is : " << x-z;   
    return 0;
}