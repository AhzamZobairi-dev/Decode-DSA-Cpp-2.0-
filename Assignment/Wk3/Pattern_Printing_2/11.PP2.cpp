/*      Square with hollow diamond cut out

.          n=5                       n = 4              n = 3         n = 2      n=1

1    * * * * * * * * *            * * * * * * *       * * * * *       * * *       *
2    * * * * - * * * *            * * * - * * *       * * - * *       * - *
3    * * * - - - * * *            * * - - - * *       * - - - *       * * *
4    * * - - - - - * *            * - - - - - *       * * - * * 
5    * - - - - - - - *            * * - - - * *       * * * * *
6    * * - - - - - * *            * * * - * * *
7    * * * - - - * * *            * * * * * * *
8    * * * * - * * * * 
9    * * * * * * * * *
    
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=2*n-1; i++)     cout << "*";
    cout << endl;
    int nsp=1;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=n-i; j>=1; j--)
        {
            cout << "*";
        }

        for(int k=1; k<=nsp; k++)
        {
            cout << " ";
        }
        nsp+=2;
        for(int l=n-i; l>=1; l--)
        {
            cout << "*";
        }
        cout << endl;
    }

    nsp-=4;

    for(int i=2; i<=n-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for(int k=1; k<=nsp; k++)
        {
            cout <<" ";
        }
        nsp-=2;

        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout << endl;
    }

    for(int i=1; i<=2*n-1; i++)     cout << "*";

    return 0;
}