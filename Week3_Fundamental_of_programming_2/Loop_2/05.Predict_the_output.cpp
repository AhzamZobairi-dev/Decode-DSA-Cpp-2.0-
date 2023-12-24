

#include <iostream>
using namespace std;

int main()
{
    int i;              // uninitialized variable
    while (i=10)        // initialize here 
    {
        cout << i << endl;
        i = i+1;
    }   
/* 
In the above code 'i' will be initialize in while() to 10 and then cout value of
i and then increment it to 11. Again the loop runs and reassignment of i to 10 
happens and then cout and increment. THis goes on indefinately and we get infinite
loop
*/
    return 0;
}