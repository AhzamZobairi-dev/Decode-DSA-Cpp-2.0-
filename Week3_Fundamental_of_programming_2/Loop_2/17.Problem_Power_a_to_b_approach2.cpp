/*Ques : Two numbers are entered through the keyboard. Write a program to find the value of one
number raised to the power of another.
*/ 

// work for every condition except base is negative.
#include<iostream>
using namespace std;

int main() 
{
    int base,power;
    cout << "Enter a base : ";
    cin >> base;
    cout << "Enter a power :";
    cin >> power;
    float value = 1;
    bool flag = true;   // power is +ve
    if(power<0)
    {
        flag = false;    // power is -ve
        power = -power;     // make it +ve
    }
    
    for(int i=1; i <= power; i++)
        {
            value = value * base;
        }
    
    if(flag == false)   
        value =  1/value;
    
    cout << value;
       
    return 0;
}
