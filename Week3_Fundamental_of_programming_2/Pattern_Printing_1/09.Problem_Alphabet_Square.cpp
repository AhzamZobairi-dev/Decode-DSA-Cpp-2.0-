/*      ALPHABET SQUARE

    A B C D
    A B C D
    A B C D
    A B C D

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
        for(int j =1; j<=side ; j++)
        {
            cout << (char)(j+64)<<" ";
        }
        cout << endl;
    }

    return 0;
}