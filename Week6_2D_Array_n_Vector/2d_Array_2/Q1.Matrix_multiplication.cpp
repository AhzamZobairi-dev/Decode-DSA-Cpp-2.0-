#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter number of row and column respectively : " ;
    cin >> m >> n;

    int p,q;
    cout << "Enter number of row and column respectively : " ;
    cin >> p >> q;

    if(n != p)
    {
        cout << "The matrices can't be multiplied. Number of columns in first matrix must be equal to number of rows in second matrix." << endl;
        return 0;
    }
    
    int arr[m][n];
    int brr[p][q];

    cout << "Enter the First Array : ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    
    cout << "Enter the Second Array : ";
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cin >> brr[i][j]; 
        }
    }

    int res[m][q];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<q; j++)
        {
            res[i][j] = 0;
            for(int k=0; k<p; k++)
            {
                res[i][j] += (arr[i][k] * brr[k][j]);
            }  
        }
    }

    cout << "The result of matrix multiplication is:" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<q; j++)
        {
            cout << res[i][j] << " "; 
        }

        cout <<endl;
    }

    return 0;
}