/*      PREDICT THE OUTPUT

#include <bits/stdc++.h>
using namespace std;
int main( ) 
{                                                      true       true        true          false
    for (int x = 1; x * x <= 10; x++)    -- x=1 =>  1*1= 1<=10, 2*2= 4<=10, 3*3= 9<=10 , 4*4= 16<=10
        cout << "In for loop" << endl;   --           inside  ,    inside ,   inside   ,    exit
}


EXPECTED OUTPUT :-

In for loop
In for loop
In for loop
*/

#include <bits/stdc++.h>
using namespace std;
int main( ) {
    for (int x = 1; x * x <= 10; x++)
        cout << "In for loop" << endl;
}