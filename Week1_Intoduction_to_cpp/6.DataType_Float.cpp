#include<iostream>
using namespace std;

int main()
{

/*Now we will discuss FLOAT data type which is used to store a real number(i.e number with decimal) 
Where as int only stores integer 
*/

    float ahz = 3.1415;             // declared a float variable and assigned it a value.
    ahz = ahz + 1;                  // ahz += 1; incrementing
    cout << ahz << endl;            //4.

    float x = 5;
    float y = 2;
    cout << x/y << endl;
    
// Here compiler consider both 5&2 as int and operation done on int will give only int 
    cout << 5/2 << endl;            // o/p -- 2

// Next two cas2, arithmetic operation between an integer and a float which will give float as answer.
    cout << 5.0/2 << endl;      // o/p -- 2.5
    cout << 5/2.0 << endl;      // o/p -- 2.5

// Here we have operation between two float which have
    cout << 5.0/2.0 << endl;
    

    int a =2.1;                 // it will give a warning of "implicit conversion from float to int"
    cout << a << endl;          // o/p -- 2


    float p = 5.0;
    cout << p << endl;          // o/p  -- 5
    cout << 6.0 << endl;        // o/p  -- 6
    return 0;
}


/*
4.1415
2.5
2
2.5
2.5
2.5
2
5
6
*/