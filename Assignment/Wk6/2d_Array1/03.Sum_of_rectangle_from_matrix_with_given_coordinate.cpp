/*
Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).
*/

#include <iostream>
#include <vector>
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

    int l1,r1,l2,r2;
    cout << "Enter the first set of coordinates l1,r1 respectively : " << endl;
    cin >> l1 >> r1;

    cout << "Enter the second set of coordinates l2,r2 respectively : " << endl;
    cin >> l2 >> r2;
    
    if(l1>l2)
    {
        int temp = l1;
        l1 = l2;
        l2 = temp;
    }
    
    if(r1>r2)
    {
        int temp = r1;
        r1 = r2;
        r2 = temp;
    }

    int sum = 0;
    for(int i=l1; i<=l2; i++)
    {
        for(int j=r1; j<=r2; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "Sum of the rectangle from (" << l1 << "," << r1 << ") to (" << l2 << "," << r2 << ") is : " << sum << endl;
    return 0;
}