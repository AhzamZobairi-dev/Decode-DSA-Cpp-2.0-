/*
Write a program to print the elements of both the diagonals in a square matrix.

Input 1:
1 2 3
4 5 6
7 8 9

Output 1:
1 3
 5
7 9 

*/
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the square matrix: ";  // The size of the square matrix is a perfect square
    cin >> n;
    
    vector<vector <int>> arr(n, vector<int>(n));
    
    cout << "Enter the elements of the matrix: " << endl;  // The elements of the matrix are given row by row
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n ; j++)
        cin >> arr[i][j];
    }     
    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n ; j++)
      {
        if(i==j)
          cout << arr[i][j] << " ";
        else if(i+j == (n-1))
          cout << arr[i][j] << " ";
        else
          cout << "  ";
      }
      cout << endl;

    } 

    return 0;
}

