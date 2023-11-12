// Ques: WAP to find the circumference of a circle with radius 10 in C++.

#include <iostream>

using namespace std;

int main()
{
    float rad = 5;
    float pi = 3.1415;

    float circumference = 2 * pi * rad ;
    cout << "Circumference of circle with radius: " << rad 
         << " is " << circumference << endl;
    return 0;
} 