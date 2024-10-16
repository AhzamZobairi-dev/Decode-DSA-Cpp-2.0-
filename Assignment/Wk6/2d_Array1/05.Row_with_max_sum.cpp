// Q5: Write a program to print the row number having the maximum sum in a given matrix.

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
    
    int sum = INT_MIN, row=-1;
    for(int i=0; i<n; i++)
    {
      int loc_sum = 0;
      for(int j=0; j<m; j++)
      { 
        loc_sum += arr[i][j];
      }
//      cout << loc_sum << endl;            -- to check sum of every row

//  It will compare the sum of row with previous sum     
      if(sum < loc_sum)
      {
        sum = loc_sum;
        row = i;
      }
    }

//    cout << "sum = " << sum << endl;     -- shows the sum of the row
    cout << "Row = " << row << endl;
    return 0;
}