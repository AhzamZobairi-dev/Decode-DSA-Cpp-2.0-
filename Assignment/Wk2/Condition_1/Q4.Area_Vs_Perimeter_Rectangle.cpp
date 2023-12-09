/*
Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7
*/

#include <iostream>
using namespace std;

int main()
{
    float length, breadth, area, perimeter;
    cout << "Enter the Length of Rectangle : ";
    cin >> length;
    cout << "Enter the Breadth of Rectangle : ";
    cin >> breadth;

    area = length * breadth ;
    perimeter = 2 * (length + breadth) ;

    if(area > perimeter)
    {
        cout << "Area is greater than Perimeter";
    }
    else
    {
        cout << "Perimeter is greater than Area";
    }

    return 0;
}