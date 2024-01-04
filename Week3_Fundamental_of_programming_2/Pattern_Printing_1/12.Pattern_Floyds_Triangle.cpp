/*      FLOYDS TRIANGLE

    1
    2 3
    4 5 6
    7 8 9 10

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the number of rows : ";
    cin >> side;
    int a=1;

    for(int i=1 ; i<=side; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}
