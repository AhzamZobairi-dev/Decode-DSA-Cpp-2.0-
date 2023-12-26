// WAp to count digit of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num,numx;
    cout << "Enter a Number : ";
    cin >> num;
   // numx = num;                     // only to preserve variable for other METHODs
    int digit=0;

//METHOD 1
    cout << endl <<"METHOD 1 -- WHILE num1>0" << endl;
    int num1 = num;
    while (num1>0)           // will work only when we have num >0 
    {
        num1 = num1/10;
        digit++;
    }
    cout << digit << " digit." << endl;

// METHOD 2
    cout << endl <<"METHOD 2 -- FOR num2>0" << endl;
    int num2 = num;
    digit =0;
    for(;num2>0;digit++)        // same for num>0;  we can use digit++ inside loop body
    {
        num2 = num2/10;
    }
    cout << digit << " digit." << endl;

//METHOD 3 - 0 in itself is a single digit so we can include a scenario for same 

    cout << endl <<"METHOD 3 -- WHILE num3>0" << endl;  // can use for loop as well
    digit = 0;
    int num3 = num;
    while (num3>0)           // will work only when we have num >0 
    {
        num3 = num3/10;
        digit++;
    }
    if(num==0)    cout << 1 <<" digit." << endl;        // need to check input number == 0
    else        cout << digit << " digit." << endl;

//METHOD 4 -- better we can use (num!=0) that will cove scenario of negative number as well
    cout << endl <<"METHOD 4 -- WHILE num4!=0" << endl;
    int num4 = num;
    digit=0;
    while (num4!=0)           // will work only when we have num >0 
    {
        num4 = num4/10;
        digit++;
    }
    if(num==0)    cout << 1 <<" digit." << endl;
    else        cout << digit << " digit." << endl;
    //NOTE-- we can use same condition in for-loop as well.

//METHOD 5 -- We use better code in METHOD 1
    digit=0;
    int num5 = num;
    cout << endl <<"METHOD 5 -- WHILE num5!=0" << endl;
    if(num5==0)
    { 
        cout << 1 << " digit." << endl;
    }
    else
    {
        while (num5!=0)            
        {
            num5 = num5/10;
            digit++;
        }
    cout << digit << " digit." << endl;
    }
       
        
/*
NOTE -- METHOD 3,4,5 . Only WHILE-loop used we can use for loop alternatively for implementation
*/

// METHOD 6 -- using FOR-loop for METHOD 5 implementation
    digit=0;
    int num6 = num;
    cout << endl <<"METHOD 6 -- WHILE num6!=0" << endl;
    if(num6==0)
    { 
        cout << 1 << " digit." << endl;
    }
    else
    {
        for(;num6!=0;digit++)                // for(;num6!=0;)
        {
            num6 /=10;                      // digit++
        }
    cout << digit << " digit." << endl;
    }
    
    return 0;
}