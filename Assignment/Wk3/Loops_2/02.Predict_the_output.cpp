/*      PREDICT THE OUTPUT

#include <bits/stdc++.h>
using namespace std;
int main( ) 
{
    int t = 10;
    while (t /= 2)                  // t=t/2 => 5(true), 2(true), 1(true), 0(false)
    {
        cout << "Hello" << endl;    //           Hello , Hello  , Hello
    }
}

EXPECTED OUTPUT --

Hello
Hello
Hello
*/

#include <bits/stdc++.h>
using namespace std;
int main( ) {
    int t = 10;
    while (t /= 2){
        cout << "Hello" << endl;
    }
}

/*  ACTUAL OUTPUT

Hello
Hello
Hello
*/