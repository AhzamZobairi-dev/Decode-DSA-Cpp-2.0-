/*
    Input : n = 4
    Output :

        *     *
        **   **
        *** ***
        *******
        *******
        *** ***
        **   **
        *     *
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int nsp=2*n-3;
    
/*      First part of the sequence
        *     *
        **   **
        *** ***
*/    
    for(int i=1; i<=n-1; i++)
    { 
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }

        for(int k=1; k<=nsp; k++)
        {
            cout << " ";
        }
        nsp-=2;

        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

/*  Second Part 
        *******
        *******
*/
    for(int i=1; i<=2;i++)
    {
        for(int j =1; j<=2*n-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

/*      Third part of the sequence
        *** ***
        **   **
        *     *
*/
    for(int i=1; i<=n-1; i++)
    { 
        for(int j=i; j<=n-1; j++)
        {
            cout << "*";
        }

        for(int k=1; k<=2*i-1; k++)
        {
            cout << " ";
        }
        nsp-=2;

        for(int j=i; j<=n-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
