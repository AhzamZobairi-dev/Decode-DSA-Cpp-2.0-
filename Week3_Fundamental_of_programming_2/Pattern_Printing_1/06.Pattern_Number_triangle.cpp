/*      NUMBER SQUARE

    1  
    1 2 
    1 2 3
    1 2 3 4

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the side of square : ";
    cin >> side;

    for(int i=1 ; i<=side; i++)  
    {
        for(int j =1; j<=i ; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}