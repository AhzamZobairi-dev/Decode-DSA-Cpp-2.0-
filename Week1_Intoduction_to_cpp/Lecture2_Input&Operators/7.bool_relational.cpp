#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    cout << (x=7)<< endl;          // assignment not comparing

/*
below code is same as above
    int x =3;
    x =7
    cout << x;

OUTPUT -- 7
*/ 
    cout << (x == 9) ;          // relational, so comapring
    return 0;
}

/*
OUTPUT
7               // x IS REASSIGNED TO 7 
0               // WE CHECKED IF 7 == 9, WHICH IS FALSE SO 0
*/