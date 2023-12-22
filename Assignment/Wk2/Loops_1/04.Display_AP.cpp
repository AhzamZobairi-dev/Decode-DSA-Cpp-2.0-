// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms : ";    
    cin >> n;

/*  Method 1 -- Mathematical        a=4, d = 3
    an = a + (n - 1)*d
       = 4 + (n - 1) * 3
       = 4 + 3*n -3
       = 3*n + 1
*/ 
    cout <<  "Method 1 " << endl;
    for( int i = 4; i <= (3*n+1); i += 3)
    {
        cout << i << endl;
    }

// Mehtod 2 -- using extra variable
    cout <<endl <<endl <<  "Method 2 " << endl;
    int a = 4;
    for ( int i = 1 ; i <= n; i++)
    {
        cout << a << endl;
        a += 3;
    }

// Method 3 -- we can use WHILE loop as well
    cout <<endl <<endl <<  "Method 3 " << endl;
    a = 4;
    while ( a <= (3*n+1))               // solved for 'an' in comments of Method 1
    {
        cout << a << endl;
        a += 3;
    }
    return 0;
}