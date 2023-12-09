/*
Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.

Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
Output 1: All 3 points lie on the same line.
*/

#include <iostream>
using namespace std;

int main()
{   
    int x1,x2,x3,y1,y2,y3;
    cout << "Enter x and y coordinate of first point : ";
    cin >> x1 >> y1;

    cout << "Enter x and y coordinate of second point : ";
    cin >> x2 >> y2;

    cout << "Enter x and y coordinate of third point : ";
    cin >> x3 >> y3;

    int area = (1.0/2.0)*(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2));

    if( area == 0)
    {
        cout << "All 3 points lie on the same line.";
    }
    else
    {
        cout << "These points are not on same line.";
    }

    return 0;                                                           
}

/*
NOTE -- 
    In coordinate geometry when we have multiple points 

    when we have 3 point we can draw a triangle between them
    using given co-ordinates of points as vertices of triangle 

    A = (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|, 
where (x1,y1),(x2,y2), and (x3,y3) are the coordinates of vertices
of the triangle.

    and the area of these 3 point is zero we can say that the points
    co-linear or lies on same line.

*/