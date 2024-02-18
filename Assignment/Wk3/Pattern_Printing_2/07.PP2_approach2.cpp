/*
        Print the following pattern
        Sample Input : m = 4, n = 6
        Sample Output :

                    *
                   * *
                  *   *
                 *     *
                  *   *
                   * *
                    *

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i+j==n+1)    cout << "*";
            else        cout <<" "; 
        }

        for(int k=1; k<=n-1; k++)
        {
            if(k==i-1)      cout <<"*";
            else            cout <<" ";
        }
        cout << endl;
    }

    int m=n-1;

    for(int i=1; i<=m; i++)
    {
        cout << " ";
        for(int j=1; j<=m; j++)
        {
            if(i==j)    cout << "*";
            else        cout << " ";
        }

        for(int k=1; k<=m-1; k++)               //less optimized -- for(int k=1; k<=m; k++)
        {
            if(i+k==n-1)    cout << "*";
            else            cout << " ";  
        }
        cout << endl;
    }

    return 0;
}