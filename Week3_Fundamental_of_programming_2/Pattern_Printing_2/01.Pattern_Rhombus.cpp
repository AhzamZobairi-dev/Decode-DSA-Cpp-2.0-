/*      SLANT SOLID SQUARE  -- RHOMBUS

            * * * * *
          * * * * *
        * * * * *       rows = 4
      * * * * * 
    
needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;

//METHOD 1
    cout << endl << "Method 1" << endl;
    for(int i=1 ; i<=row; i++)  
    {
        for(int j=i; j<row ; j++)
        {
            cout << "  ";
        }
        for(int j =1; j<=row ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

//METHOD 2
    cout << endl << "Method 2" << endl;
    for(int i=1 ; i<=row; i++)  
    {
        for(int j=1; j<=row-i ; j++)
        {
            cout << "  ";
        }
        for(int j =1; j<=row ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}