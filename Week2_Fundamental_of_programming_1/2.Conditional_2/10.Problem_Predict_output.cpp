//      PREDICT THE OUTPUT
/*  we have only 2 case where we solve right ot left

    1. Assignment       -- like p += q += r
    2. Ternary operator -- like above

*/

#include <iostream>
using namespace std;

int main() 
{
    int x =3, y, z;
    y = x = 10;         // assignment from right to left, first x =10 then y = x i.e y =10
    z = x < 10;         // '> , < ' >>>>> '=' so first (x < 10) = (10 < 10 ) = 0 (FALSE) => z= 0;
    cout << "x = " << x << "y = " << y << "z = " << z;
    
    return 0;
}

//OUTPUT -- x = 10y = 10z = 0