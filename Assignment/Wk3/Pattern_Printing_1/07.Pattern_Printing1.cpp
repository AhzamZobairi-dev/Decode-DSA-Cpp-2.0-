/*  Print the following pattern

Sample Input : n = 4

Output :

   ****
  ****
 ****
****

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

        for(int k=1; k<=side; k++)
        {
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}