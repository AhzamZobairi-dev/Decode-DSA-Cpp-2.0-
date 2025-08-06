#include <iostream>
using namespace std;

int main()
{
    int a = 15;             
    int *ptr = &a;

    int b = (*ptr)++;  // *(ptr++)  seems to me both are quivalent -- WRONG

    /*                         1. (*ptr)++
*ptr dereferences the pointer, giving you the value it points to (e.g., a).
(*ptr)++ increments the value pointed to by ptr.
ptr itself does not move; only the value changes.

int a = 15;
int *ptr = &a;
(*ptr)++;   // a becomes 16, ptr still points to a

BUT FOR                         2. *(ptr++)

ptr++ increments the pointer itself, but returns the original address.
*(ptr++) gives the value at the current address, then moves the pointer to the next location
(for int*, to the next int).
The value at the original address is not changed.
Example:

int a = 15;
int *ptr = &a;
int b = *(ptr++); // b is 15, ptr now points to "next int" (likely garbage)              
*/

/*
+------------------+------------------+---------------------+----------------------+
|   Expression     |   What Changes   |   Value modified?	|   Pointer modified?  |
+------------------+------------------+---------------------+----------------------+
|   (*ptr)++       |   value at ptr   |         Yes         |        No            |
|                  |                  |                     |                      |
|   *(ptr++)       |  Pointer itself  |          No         |       Yes            |
+------------------+------------------+---------------------+----------------------+
*/

//  ++(*ptr)  --  b = 16 and a = 16
//   ++*ptr is bad practice rather ++(*ptr) is correct

    int c =  ++(*ptr); // will not give GV

    int d = *(++ptr); // will give GV
    cout << a <<"  "<< b << " " << c <<endl;  // we can use  ' ' as well but it can only have single character

    return 0;
}