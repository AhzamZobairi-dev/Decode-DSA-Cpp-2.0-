/*
        Input : n = 5
        Output:
        *       *
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

    int x=n-1;
    for(int i=1; i<=n; i++)
    {
        
        for(int j =n-i+1; j<=n-1; j++)      // for(int j =2; j<=i; j++)
        {
            cout <<" ";
        }

        for(int k=1; k<=i; k++)
        {
            if(i == k)      cout << "*";
        }
        
        for(int l=2*x-1; l>=1; l--)
        {
            cout << " ";
        }
        x--;

        for(int m=n; m<=n; m++ )
        {
            if(i!=n)    cout << "*";
        }
        cout << endl;
    }
}