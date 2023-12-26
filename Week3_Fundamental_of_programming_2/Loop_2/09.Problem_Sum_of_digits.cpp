/*          WAP to print sum for digit of a given number\

ALGORITHM 

Start a loop to iterate through the input number  -- eg 321
    1. Fetch last digit of input number 
    -- can be done using % operator
    -- we will fetch 1 from 321 by 321 % 10
    
    2. Make a sum variable and add last digit to it
    -- this will store last digit for every loop iteration making summation
    -- will store 1 in sum

    3. Loose the digit placed at unit place  
    -- as the last digit is fetched using % operator and saved. We need to loose the last digit by / 
    -- 321 /10 = 32

this step 1,2,3 will keep iterating. So  we nned a loop condition which will be till input number>0
    32>0    -- true
    1. 32%10 = 2
    2. sum = sum + 2 => 1+2 = 3
    3. 32/10 = 3

    3>0     -- true
    1. 3% 10 = 3
    2. sum = sum + 3 => 3 + 3= 6
    3. 3/10 = 0

    0>0     -- false and loop ends and sum = 6

    Now we have variable 'sum' which have sum of all digits.
*/ 


#include <iostream>
using namespace std;

int main()
{   
    int num, sum=0;
    cout << "Enter a number to find its sum : ";
    cin >> num;

//Method 1  -- using while-loop  
    int num1 = num;
    while(num1>0)
    {
        sum = sum + (num1 % 10);
        num1/=10;
    }
    
    cout << "While - Sum of " << num << " is : "<< sum << endl;

// Method 2 -- Using For-loop 
    int num2=num;
    sum=0;
    for(;num2>0;)                    //for(;num>0;num/=10)
    {
        sum = sum + (num2 % 10);
        num2/=10;
    }
    cout << "For - Sum of " << num << " is : " << sum << endl;

    return 0;
}