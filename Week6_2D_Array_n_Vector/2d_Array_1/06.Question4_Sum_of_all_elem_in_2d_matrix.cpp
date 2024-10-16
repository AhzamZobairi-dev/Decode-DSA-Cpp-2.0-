// Ques : Write a program to print sum of all the elements of a 2D matrix.

#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout << "Enter number of row and column respectively : " ;
    cin >> r >> c;

    int arr[r][c];

    cout << "Enter the Array : ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    int sum=0;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum += arr[i][j]; 
        }
    }

    cout << sum;

    return 0;
}