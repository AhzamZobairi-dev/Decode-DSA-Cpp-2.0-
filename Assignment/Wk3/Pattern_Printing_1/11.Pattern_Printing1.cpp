/*  Print the following pattern

Input: n = 4
Output:

   *
  **
 ***
****
 ***
  ** 
   *

*/


#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter side of sqaure : ";
    cin >> side;
    

    for(int i=1; i<=side; i++)
    {
        for(int j=1; j<=side-i; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1; i<=side-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << " ";
        }
        for(int k=i; k<=side-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}