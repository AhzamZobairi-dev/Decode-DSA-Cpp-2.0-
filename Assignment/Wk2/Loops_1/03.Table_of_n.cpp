// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";    
    cin >> n;

// Method 1 -- we formatted table upto times 10.
    cout <<  "Method 1 " << endl;
    for ( int i=n; i <= 10*n ; i+=n)
    {
        cout << n << " x " << (i/n) << " = " << i << endl; 
    }

// Method 2 -- General implementation upto times 20 
    cout << endl << endl <<"Method 2 " << endl ;
    for (int i = 1; i <= 20 ; i++)
    {
        cout << n*i << endl;
    }
    return 0;
}