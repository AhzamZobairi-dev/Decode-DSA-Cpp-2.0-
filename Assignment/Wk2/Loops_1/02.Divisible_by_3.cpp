//      Print all numbers from 1 to 100 that are divisible by 3

#include <iostream>
using namespace std;

int main()
{
/*  using most efficient way 

-- we now the number divible by 3 after 1 is 3 so we will start loop from 3
-- then we will use condition mentioned in question, i <= 100
-- we can increment 'i' by 3 

*/ 
    for(int i = 3; i <=100 ; i +=3)
    {
        cout << i << endl;
    } 

    return 0;
}