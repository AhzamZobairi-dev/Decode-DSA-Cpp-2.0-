/*
WAP for finding the volume of the cylinder by taking radius and height as input.
    Vol of Sphere = 4/3 * pi* r*r*r
*/

#include <iostream>
using namespace std;
int main()
{
    float radius, height, pi, volume;
    pi = 3.14159;

    cout << "Enter the radius of the sphere : ";
    cin >> radius;
    volume = (4.0/3.0 * pi * radius * radius * radius);
/* 
THESE NOTES ARE FOR REVISION OF CONCEPTS

We cannot use 
    - volume = (4/3*pi*r*r*r); 
    - as 4/3 will be treated as int and the output of 4/3 is 1
or we can do v
    - volume = (4*pi*r*r*r)/3;
    - 4 * float (4*pi*r*r*r) is float and (4*pi*r*r*r)/3 is float
*/    
    cout << "Volume of Sphere is " << volume << endl;

    return 0;
}