/*  Print the following pattern

Sample Input : m = 4, n = 6

Sample Output :

******
*    *
*    *
******

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
    

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(i == 1 || i == row || j ==1 || j == col)
                cout << "*";
            else                    
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}