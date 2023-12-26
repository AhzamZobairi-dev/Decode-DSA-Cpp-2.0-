/*Ques : Two numbers are entered through the keyboard. Write a program to find the value of one
number raised to the power of another.
*/ 

#include<iostream>
using namespace std;

int main() 
{
    int base,power;
    cout << "Enter a base : ";
    cin >> base;
    cout << "Enter a power :";
    cin >> power;
    int value = 1;

    if(power>0)
    {
        for(int i=1; i <= power; i++)
        {
            value = value * base;
        }
        cout << value;
    }
    float value1=1;
    if(power<0)
    {
        for(int i=1; i <= (-power); i++)
        {
            value = value * base;
        }
        value1 = 1.0/value;
        if(base >=0)    cout << value1;
        if(base < 0)    cout << -value1;
    }
    
    return 0;
}
