/*
Predict the output of the below code:

#include<iostream>
using namespace std;
int main() 
{
    int a = 500, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    cout << "value of b and c are respectively " << b << " and " << c;
    return 0;
}


EXPECTED OUTPUT -- 
        value of b and c are respectively 300 and 200
*/

#include<iostream>
using namespace std;
int main() 
{
    int a = 500, b, c;                  // a=500
    if (a >= 400)                       // true as 500>=400
        b = 300;                        // b = 300 (inside if-condition)
    c = 200;                            // c = 200
    cout << "value of b and c are respectively " << b << " and " << c;
    return 0;
}



// Actual Output

// value of b and c are respectively 300 and 200