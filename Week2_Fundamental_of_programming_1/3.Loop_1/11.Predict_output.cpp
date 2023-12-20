#include <iostream>
using namespace std;

int main()
{   
    int j;              // uninitialized 'j' have garbage value
    while (j <=10)      
    {
        cout << j << endl;
        j = j + 1 ;
    }

    return 0;
}

// if GV is < 10 it will run or else it will not