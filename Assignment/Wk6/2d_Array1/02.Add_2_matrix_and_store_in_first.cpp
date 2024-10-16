//Q2 - Write a program to add two matrices and save the result in one of the given matrices.

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n,m;
    cin >>n >> m;
    
    cout << "Enter First array : " << endl;
    vector<vector <int>> arr(n, vector<int>(m));
    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
      {
        cin >> arr[i][j];
      }
    }
    
    cout << "Enter second array : " << endl;
    vector<vector <int>> brr(n, vector<int>(m));
    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
      {
        cin >> brr[i][j];
      }
    }
    
    cout << "Output of addition : " << endl;
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
      {
        arr[i][j] += brr[i][j];
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }    
    
    return 0;
}