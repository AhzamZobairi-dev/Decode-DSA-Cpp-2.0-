#include <iostream>
using namespace std;

int main()
{
    bool p = false;         // i.e 0 in p
    bool q = false;         // i.e 0 in q
    bool r = true;          // i.e 1 in r

    cout << (p == q == r) << endl;
/*
we will solve it using precendence or heirarcy and go from 
left to right.
first solve 
    p==q  => as p=0 and q=0 => p == q is true i.e 1
Now
    1==r  => as r=1 => 1 == r is true i.e 1

EX OUTPUT -- 1 
*/


// TAKING ANOTHER INPUT
    int a = 1;
    int b = 2;
    int c = 2;
    cout << (a == b == c) << endl;

/*Here is (1==2==2) will solve from LHS (1==2)==2 => 0 == 2
 Eventually 0 == 2 will give 0 i.e false

IF WE WOULD HAVE GIVEN THE INPUT AS (p ==(q==r)) 
then answer will change  (1 ==(2==2)) ==> (1 == (1)) as true
then 1 == 1 ==> 1 i.e true
*/
    cout << (a == (b == c)) << endl;
    return 0;
}

/*OUTPUT -- 
1
0
1

*/