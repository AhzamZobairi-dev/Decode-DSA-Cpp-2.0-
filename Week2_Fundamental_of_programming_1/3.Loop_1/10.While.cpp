#include <iostream>
using namespace std;

int main()
{
    cout <<  endl << "For loop Method 1" << endl ;
    for( int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
/* we can break the for loop in multiple ways and it iwll work as well like

METHOD 1
*/
    cout <<  endl << "For loop Method 2" << endl ;
    int i = 1 ;              // declaration and initialization of i outside the body of for 
    for(;i<=10;i++)
    {
        cout << i << endl;
    }

// METHOD 2
    cout <<  endl << "For loop Method 3" << endl ;
    i = 1 ;                  // initialization outside the for=loop body
    for(;i<=10;)
    {
        cout << i << endl;
        i++;                // increment/decrement inside the body of for-loop 
    }


// IN WHILE LOOP WE DO THE SAME AS METHOD 2 
    cout <<  endl << "While loop Method 4" << endl ;
    int j = 1;   
    while ( j <= 10)
    {
        cout << j << endl;
        j++;
    }
}