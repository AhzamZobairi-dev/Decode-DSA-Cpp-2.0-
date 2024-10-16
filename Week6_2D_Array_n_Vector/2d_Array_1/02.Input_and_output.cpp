#include <iostream>
using namespace std;

int main() 
{
  int m,n;
  cout << "Enter the number of rows : ";
  cin >> m ;
  
  cout << "Enter the number of column : ";
  cin >> n;

// Input the matrix  
  int arr[m][n];
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
      cin >> arr[i][j];
  }

// Print the matrix
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  
  return 0;
}