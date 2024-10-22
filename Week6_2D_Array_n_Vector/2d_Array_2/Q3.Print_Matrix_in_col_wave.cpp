
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter number of row and column respectively : " ;
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter the Array : ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    for(int j=0; j<n; j++)
    {
        if(j%2 == 0)
        {
            for(int i=0; i<m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for(int i = m-1; i>=0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}