/*
WAP for finding the volume of the cylinder by taking radius and height as input.
    Vol of cylinder = pi* r*r*h
*/

#include <iostream>
using namespace std;
int main()
{
    float radius, height, pi, volume;
    pi = 3.14159;

    cout << "Enter the radius of the cylinder : ";
    cin >> radius;
    cout << "Enter the height of the cylinder : ";
    cin >> height;
    volume = (pi * radius * radius * height);

    cout << "Volume of cylinder is " << volume << endl;

    return 0;
}