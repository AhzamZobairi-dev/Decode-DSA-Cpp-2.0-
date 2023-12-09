/*
Any year is input through the keyboard. Write a program to determine whether the year is a leap year
or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter an year to check for leap year : ";
    cin >> year;

    if ( year % 4 == 0)
    {
        cout << year << " is a leap year";
    }
    else
    {
        cout << year << " is not a leap year";
    }

    return 0;
}


/*
NOTE -- just checking if year is divisible by 4 is not enough as we needed to take 
        account of century year as well
*/