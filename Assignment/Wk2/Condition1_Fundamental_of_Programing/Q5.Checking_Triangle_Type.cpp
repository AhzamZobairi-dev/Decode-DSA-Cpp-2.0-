/*
Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle.
*/


#include <iostream>
using namespace std;

int main()
{
    float side1, side2, side3;
    cout << "Enter First sides of triangle : ";
    cin >> side1 ;
    cout << "Enter Second sides of triangle : ";
    cin >> side2 ;
    cout << "Enter Third sides of triangle : ";
    cin >> side3;

//First we are checking if triangle is possible with side taken as input

    if( (side1+side2 > side3) && (side2+side3 > side1) && (side1+side3 > side2))        
    {
        if(side1 == side2 && side2 == side3)
        {
            cout << "This is an Equilateral triangle";
        }
        else if( side1 == side2 || side2 == side3 || side1 == side3)    
        {
            cout << "This is an Isosceles triangle";
        }
        else
        {
            cout << "This is scalene triangle";             //15,34,32
        }
    }
    else
    {
        cout << "Triangle is not possible";
    }

    return 0;
}