// 1. Print all the odd numbers from 1 to 100.

#include <iostream>
using namespace std;

int main()
{

// Method 1  -- loop runs for 100 times
    cout <<  "Method 1 " << endl;
    for(int i =1 ; i <= 100 ; i++)              //we can use (i < 100) as well because 100 is not odd 
    {
        if(i % 2 != 0)
            cout << i << endl;
    }

// Method 2 -- efficient as loop run for 50 times
    cout << endl << endl <<"Method 2 " << endl ;
    for(int i = 1; i <= 100 ; i+=2)
    {
         cout << i << endl;
    }

    return 0;
}