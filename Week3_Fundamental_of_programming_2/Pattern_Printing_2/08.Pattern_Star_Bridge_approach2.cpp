#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int m = n-1;
    int nsp=1;              // for printing space
    
    for(int i=1; i<=2*n-1; i++)     cout << "*";
    cout << endl;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m+1-i; j++)       //  for(int j=i; j<=n-1; j++)       
        {
            cout << "*";
        }

        for(int k=1; k<=nsp; k++)
        {
            cout << " ";
        }
        nsp+=2;

        for(int l=1; l<=m+1-i; l++)       //  for(int l=i; l<=n-1; l++)       
        {
            cout << "*";
        }
        cout << endl;
    }
}