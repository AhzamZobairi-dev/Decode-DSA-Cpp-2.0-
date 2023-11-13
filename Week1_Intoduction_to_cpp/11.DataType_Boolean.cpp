/*
bool data type can store two value true or false

false  --  0  -- off
true   --  1  -- on  || any non zero number

*/


#include <iostream>

using namespace std;

int main()
{
    bool flag = false;
    bool flag2 = 0;
    bool flag3 = true;
    bool flag4 = 1;
    bool flag5 = 20;
    bool flag6 = .25;

    cout<<flag << endl;
    cout<< flag2 << endl;
    cout<< flag3 << endl;
    cout<< flag4 << endl;
    cout<< flag5<< endl;
    cout<< flag6 << endl << endl;

    cout << (7 > 4) << endl;
    cout << (7 < 4) << endl;
    cout << (7 >= 4) << endl;
    cout << (4==4) << endl;
    cout << (7 != 4) << endl;
    cout << (4 != 4) << endl;
    return 0;

}

/*
OUTPUT

0
0
1
1
1
1


1
0
1
1
1
0
*/