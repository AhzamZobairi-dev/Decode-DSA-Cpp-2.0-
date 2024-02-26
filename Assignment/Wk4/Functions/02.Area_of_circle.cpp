//Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

#include <iostream>
using namespace std;

float getArea(int r)
{
    return 3.14159*r*r;
}

int main()
{
    int r;
    cout << "Enter a radius : ";
    cin >> r;

    cout << "The area of circle with radius " << r << " is "<< getArea(r);

    return 0;
}