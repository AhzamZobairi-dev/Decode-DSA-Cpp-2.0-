/*      STAR PATTERN
   
    *****
    ****
    ***
    **
    *

*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the height of triangle : ";
    cin >> row;

//METHOD 1
    cout <<"METHOD 1" << endl;
    for(int i=1; i<=row;i++)
    {
        for (int j =4; j>=i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
//METHOD 2
    cout << endl << "METHOD 2" << endl;
    for(int i =1 ; i <= row; i++)
    {
        for(int j = 1; j <= row+1-i ; j++)      // if we use j<=i we will print star Traiangle
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}