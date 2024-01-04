/*      STAR PLUS

            *
            *
        * * * * *
            *
            *    
needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the side of square in odd number only : ";
    cin >> side;

    int mid = (side/2)+1;
    for(int i=1; i<=side; i++)
    {
        for(int j=1; j<=side; j++)
        {
            if(i== mid || j == mid)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}