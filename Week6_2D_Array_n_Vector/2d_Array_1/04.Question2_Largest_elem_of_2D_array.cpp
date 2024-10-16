// Ques: Write a C++ program to find the largest element of a given 2D array of integers.

#include<iostream>
#include <climits> 

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

    int max = INT_MIN;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j] > max)
                max = arr[i][j]; 
        }
    }

    cout << endl << max;

/*    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << arr[i][j]; 
        }
        cout << endl;
    }
*/


    return 0;
}