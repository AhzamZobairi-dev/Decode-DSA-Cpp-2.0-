// Predict the output

#include <iostream>
using namespace std;

int main() 
{
    char x;                     // char variable x
    int a = 2;               

    x =(a > 0) ? 'a' : 'S';
/*
    in ternary operator 
            condition ? true : false
               (a>0)  ? 'a'  : 'S';

    when a>0 we will put 'a' in x and if (a<0) we will put 'S' in x

    Here we have a as 2 so condition is true so we will put 'a' in x

Converting the above condition to if else 
    if(a>0)
        x = 'a';
    else
        x = 'S';
*/
    cout << "Value of x : " << x << endl;
    cout << "Value of a : " << a;
    return 0;
}

/*
    OUTPUT
Value of x : a
Value of a : 2
*/