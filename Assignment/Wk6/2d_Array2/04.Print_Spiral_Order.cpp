/*
Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

Input 1: n = 3
Output 1: [[1,2,3],[8,9,4],[7,6,5]]

Input 2: n = 1
Output 2: [[1]]
*/

#include <iostream>
using namespace std;

int main() 
{

    int n;
    cout << " Enter the dimention of the square matrix: ";
    cin >> n;

    int arr[n][n];
    int r_min = 0, c_min = 0, value=1;
    int r_max = n-1, c_max = n-1;

    for(int i=0; i< n*n; i++)
    {
        while(r_min <= r_max && c_min <= c_max)
        {
            for(int j=c_min; j<= c_max; j++)
            {
                arr[r_min][j] = value;
                value++;
            }
            r_min++;

            if(r_min > r_max && c_min > c_max)
                break;
            for(int i = r_min; i<=r_max; i++)
            {
                arr[i][c_max] = value;
                value++;
            }
            c_max--;

            if(r_min > r_max && c_min > c_max)
                break;
            for(int j=c_max; j>=c_min; j--)
            {
                arr[r_max][j] = value;
                value++;
            }
            r_max--;

            if(r_min > r_max && c_min > c_max)
                break;
            for(int i= r_max; i>=r_min; i--)
            {
                arr[i][c_min] = value;
                value++;
            }
            c_min++;
        }
    }

    cout << endl << "answer matrix :" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++ )
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}