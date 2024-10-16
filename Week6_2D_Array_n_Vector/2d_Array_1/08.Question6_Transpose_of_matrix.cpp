//LeetCode 867
// Ques : Write a program to print the transpose of the matrix entered by the user and store it in a new matrix.

#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout << "Enter number of row and column respectively : " ;
    cin >> r >> c;

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
    cout << endl;


    for(int i=0; i<c; i++)               // for 2x3 we are assigning as ((0,0),(1,0),(0,1),(1,1),(0,2),(1,2)) 
    {
        for(int j=0; j<r; j++)
        {
            t_arr[i][j] = arr[j][i];
        }
        cout << endl;
    }

    // //(OR)
    //     for(int j=0; j<c; j++)          // here we are doing as ((0,0),(01,),(0,2),(,),(,),(,))
    // {
    //     for(int i=0; i<r; i++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << "Transpose of inpur matrix is : " << endl;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout << t_arr[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}