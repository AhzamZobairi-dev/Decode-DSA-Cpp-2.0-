#include <iostream>
using namespace std;

int main()
{
    float a =5 , b = 2;
    int c;
    c = a % b;
    cout << c << endl;
    return 0;
}

/*
COMPILE TIME ERROR 
.\12.Problem_modulo.cpp: In function 'int main()':
.\12.Problem_modulo.cpp:8:11: error: invalid operands of types 'float' and 'float' to binary 'operator%'
     c = a % b;
         ~~^~~

IN MODULDO OPERATOR WE WILL REQUIRE ALL THE OPERANDS TO BE OF INT DATA TYPE
    a % b both needs to be of int data type
*/