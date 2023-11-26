#include <iostream>
using namespace std;

int main()
{
    int num1;
    int p = 5, q = 10;
    p +=q -= p;     
/*
Let us expand the above term aS p = 5, q = 10
Firstly, we would have to take the RHS and solves as this is an statement
    q -= p => q = q - p => q = 10 - 5 => q=5.
Then,
    p += q => p = p + q => p = 5 + 5 => p = 10


WRONG BUT LETS EXPOUND ON IT AS WELL
if we have taken LHS first then RHS p = 5, q = 10
    p += q => p = p + q => p = 5 + 10 => p = 15
then,
    q -= p => q = q - p => q = 10 - 15 => q= -5.

IN THE CASE OD ASSIGNMENTS WE HAVE TO MOVE FROM RIGHT TO LEFT

*/
    cout << p << " " <<  q << endl;

    return 0;

}