/*      SQUARE PYRAMID

            * 
          * * * 
        * * * * *       rows = 4
      * * * * * * *
    
needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;

    int nsp = row-1;
    int nst = 1;
    cout << endl << "Method 1" << endl;
    for(int i=1 ; i<=row; i++)  
    {
        for(int j=1; j<=nsp-1 ; j++)
        {
            cout << "  ";
        }
        nsp--;

        for(int k =1; k<=nst ; k++)
        {
            cout << "* ";
        }
        nst+=2;
        
        cout << endl;
    }



    return 0;
}