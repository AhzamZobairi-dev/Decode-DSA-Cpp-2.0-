/*  Predict the output

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    while ('1' < '2')       -- we are comparing two char meaning ascii of two char i.e (49 < 50) -- true
        cout << "In while loop" << endl;    -- condition is in while loops body, it gets executed. But the
                                               there is no change in condition make this a INFINITE LOOP

}

EXPECTED OUTPUT :-

In while loop
In while loop
In while loop
...
...
...
...
infinite time
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    while ('1' < '2')
        cout << "In while loop" << endl;
}

/* ACTUAL OUTPUT

In while loop
In while loop
In while loop
...
...
...
...
infinite time

*/