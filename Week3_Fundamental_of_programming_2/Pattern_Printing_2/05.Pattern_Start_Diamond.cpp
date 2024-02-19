/*  STAR DIAMOND

           *
          ***
         *****
        *******
         *****
          ***
           *

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i = 1; i <=n ; i++)
    {
        for(int j=i; j<=n-1; j++)       // for(int j=1; j<=n-i; j++) and  for(int j=n-i; j>=1; j--) will give the same result.
                                        // but for(int j=n-1; j>=1; j--) is not corrrect as loop run for n-1 time always
        {
            cout << " ";
        }
        for(int k= 1; k<=2*i-1; k++)
        {
            cout <<"*";
        }

        cout << endl;
    }

    for(int i=n-1; i>=1; i--)
    {
        for(int j=n-1; j>=i; j--)
        {
            cout << " ";
        }
        for(int k=2*i-1; k>=1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}