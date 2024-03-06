/*          Actual and Formal Parameter

    int funct(int x, int y)           -- x,y is formal paramenter/Argument 
    {   //code      }

    int main()
    {
        int x,y;
        funct(x,y)                  -- Actual Parameter
    }
*/  


#include <iostream>
using namespace std;

int func(int x, int y)
{
    cout << "Address of x in func : " << &x << endl;    //Address of x in func : 0x61fef0
    cout << "Address of y in func : " << &y << endl;    //Address of y in func : 0x61fef4
    return x+y;
}

int main()
{
    int x=5,y=6;

    cout << "Address of x in main : " << &x << endl;    //Address of x in main : 0x61ff0c
    cout << "Address of y in main : " << &y << endl;    //Address of y in main : 0x61ff08
    cout << func(x,y) << endl;


    return 0;
}