/*      NUMBER PYRAMID PALINDROME

           1
          121
         12321
        1234321

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=i; k++)
        {
            cout << k; 
        }
        for(int j=i-1; j>=1; j--)     
            {
                cout << j;
            }
        cout <<endl;
    }
}