#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int x=n-1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)    cout << "*";
            else        cout << " ";
        }

        for(int j=1; j<=x; j++)
        {
            if(i+j==n)    cout << "*";
            else        cout << " ";
        }
        cout << endl;
    }

    
}