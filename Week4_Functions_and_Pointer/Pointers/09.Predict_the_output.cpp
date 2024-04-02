#include <iostream>
using namespace std;

int main()
{
    int a = 15;             
    int *ptr = &a;

    int b = (*ptr)++;  // *(ptr++)  seems to me both are quivalent 
    //  ++(*ptr)  --  b = 16 and a = 16
//   ++*ptr is bad practice rather ++(*ptr) is correct

    int c =  ++(*ptr); // will not give GV

    int d = *(++ptr); // will give GV
    cout << a <<"  "<< b << " " << c <<endl;  // we can use  ' ' as well but it can only have single character

    return 0;
}