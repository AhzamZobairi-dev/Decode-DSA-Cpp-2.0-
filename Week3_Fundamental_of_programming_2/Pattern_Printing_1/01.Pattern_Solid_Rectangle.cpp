/*      SOLID RECTANGLE

    * * * * *
    * * * * *
    * * * * *       rows = 5 and column = 6 
    * * * * * 
    * * * * * 
    * * * * * 

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the number of column : ";
    cin >> col;

    for(int i=1 ; i<=row; i++)  
    {
        for(int j =1; j<=col ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}