// Ques :- Calculate Transpose of given square matrix and store in itself without making another matrix.

#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout << "Enter number of row : " ;
    cin >> r; ;
    cout << "Enter number of column : " ;
    cin >> c;

    int arr[r][c];
    int t_arr[c][r];

    cout << "Enter the Array : ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    cout << "Input matrix is : "<< endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

    for(int i=0; i<c; i++)
    {
        int swap =0;
        for(int j=0; j<=i; j++)
        {
            swap = arr[j][i];
            arr[j][i] = arr[i][j] ;
            arr[i][j] = swap;
        }
    }

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}