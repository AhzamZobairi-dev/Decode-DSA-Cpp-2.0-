/*      NUMBER TRIANGLE

    1 2 3 4
    1 2 3
    1 2
    1

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the num of row : ";
    cin >> row;

//METHOD 1
    cout << endl << "METHOD 1"<< endl ;
    for(int i = row; i >=1 ; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }


//METHOD 2
    cout << endl << "METHOD 2" << endl;
    for(int i=1 ; i<=row; i++)  
    {
        for(int j =1; j<=row+1-i ; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}