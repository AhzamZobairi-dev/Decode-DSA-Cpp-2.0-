// WAP to check if a number is prime or not.

// A prime number is any number that has no positive divisor other than itself and the number 1

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number  : ";
    cin >> x;
    
    cout <<  endl << "Method 1 using bool flag" << endl ;
    bool flag = true;               // true mean number is prime -- it is a better approach as the loop starts with 2 and for x=2, loop will not get executed
                                    // because of condition 2<2. One more possiblity is when using 1 as input which will also become prime acc to given logic
                                    // which we can counter in if-else statememt 
    for(int i=2; i<x ; i++)
    {
        if(x%i == 0)
        {
            flag = false;
            break;
        }
    }

    if ( x == 1)    cout << x << " is neither prime nor composite";
    else if(flag == true)    cout << x << " is prime number";
    else    cout << x << " is a composite number";

/*      Method 2
using boolean flag is not necessary, we can declare an int varibale & assign it to 0 and increment it inside if-statement inside of for-loop
   
*/
    cout <<  endl << "Method 2 -- int " << endl ;
    int a =0;
    for(int i=2; i<x ; i++)
    {
        if(x%i == 0)
        {
            a++;
            break;
        }
    }

    if(x==1)            cout << "no";
    else if( a == 0)    cout << "prime";
    else                cout << "composite number";

    return 0;
}