/*
Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void display_array(const vector<vector <int>>& matrix, int size)
{
    int mid = size / 2;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {   
            if(i == mid || j == mid)
                cout << matrix[i][j] << " ";
            else 
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the dimendion of square matrix (3x3,5x5,7x7,....)  : ";
    cin >>n;
    
    cout << "Enter the array : " << endl;
    vector<vector <int>> arr(n, vector<int>(n));
    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        cin >> arr[i][j];
      }
    }

    display_array(arr, n);
    return 0;
}