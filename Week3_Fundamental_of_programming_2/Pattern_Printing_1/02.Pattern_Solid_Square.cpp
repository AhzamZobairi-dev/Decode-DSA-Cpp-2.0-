/*      SOLID SQUARE

    * * * * *
    * * * * *
    * * * * *       rows == column = 5 
    * * * * * 
    * * * * * 

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the number of rows & column of square : ";
    cin >> side;

    for(int i=1 ; i<=side; i++)  
    {
        for(int j =1; j<=side ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}