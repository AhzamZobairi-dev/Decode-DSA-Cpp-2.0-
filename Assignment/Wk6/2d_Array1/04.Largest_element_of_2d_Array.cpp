// Q4: Write a C++ program to find the largest element of a given 2D array of integers.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number of rows and columns respectively : ";
    cin >>n >> m;
    
    cout << "Enter the array : " << endl;
    vector<vector <int>> arr(n, vector<int>(m));
    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
      {
        cin >> arr[i][j];
      }
    }

    int max = INT_MIN;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "The largest element in the given array is : " << max << endl;

    return 0;
}