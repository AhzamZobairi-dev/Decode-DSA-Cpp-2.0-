/*          PREDICT OUTPUT

#include<iostream>
using namespace std;

int main() {
    int x = 3 ;                             // 3 is in x
    float y = 3.0 ;                         // 3.0 is in y 
    if (x == y)                             // 3 == 3.0, seems valid and true like in arithmetic operations there is implicit typecasting 
                                            // from int to float. For logical operator it seems this is also the same case.
    cout <<"x and y are equal"  ;           // if-block will be printed.
    else
    cout << "x and y are not equal"  ;
    return 0;
}


EXPECTED OUTPUT

x and y are equal
*/

#include<iostream>
using namespace std;

int main() {
    int x = 3 ;
    float y = 3.0 ;
    if (x == y)
    cout <<"x and y are equal"  ;
    else
    cout << "x and y are not equal"  ;
    return 0;
}


// ACTUAL OUTPUT

// x and y are equal
