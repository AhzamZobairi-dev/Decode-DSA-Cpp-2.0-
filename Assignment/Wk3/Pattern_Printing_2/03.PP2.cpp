/*
Input: n = 4
Output:

              A
            B A B
          C B A B C
        D C B A B C D
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j<=n-1; j++)         //for(int j = 1; j<=n-i; j++)
        {
            cout << " ";
        }

        for(int k=i ; k>=1; k--)
        {
            cout << char(k+ 64);
        }

        for(int l=1; l<=i-1; l++)       //  for(int l=2; l<=i; l++)
        {
            cout << char(l+1+64);
        }
        cout << endl;
    }
    
    return 0;
}