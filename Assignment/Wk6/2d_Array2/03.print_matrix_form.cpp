/*
Write a program to print the matrix in wave form.
Input :
1 2 3
4 5 6
7 8 9

Output : 7 4 1 2 5 8 9 6 3
*/

#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout << "Enter the dimension of Matrix : ";
    cin >> m >> n;

    int arr[m][n];

    cout << "Enter the matrix " << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++ )
        {
            cin >> arr[i][j];
        }
    }

    cout << endl << "The wave matrix is : " << endl;

    for(int j=0; j<n; j++)
    {
        if(j%2 == 0)    
            for(int i=m-1; i>=0; i-- )
            {
                cout << arr[i][j] << " ";
            }
        else
        {
            for(int i=0; i<m; i++ )
            {
                cout << arr[i][j] << " ";
            }
        }
    }


    return 0;
}