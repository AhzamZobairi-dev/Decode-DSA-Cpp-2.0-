/*
Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

Input 1: 2 0
Output 1: the point lies on the x - axis.
*/




#include <iostream>
using namespace std;

int main()
{   
    int x,y;
    cout << "Enter X-axis : ";
    cin >> x;
    cout << "Enter Y-axis : ";    
    cin >> y;

    if( x == 0 && y ==0 )
    {
        cout << "Point lies on Orign";
    }
    else if( x == 0 && y != 0)
    {
        cout << "Point lies on y- axis";
    }
    else if( x != 0 && y == 0)
    {
        cout << "Point lies on x- axis";
    }
    else
    {
        cout << "Point lies on cartesian space";
    }
    
    return 0;                                                           
}