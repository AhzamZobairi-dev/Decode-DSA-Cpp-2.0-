/*
Write a program to rotate the matrix by 90 degrees anti-clockwise.

Input 1:
1 2 3
4 5 6
7 8 9

Output 1:
3 6 9
2 5 8
1 4 7

 */

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int m,n;
    cout << "Enter the dimension of the  matrix: ";
    cin >> m >> n;
    
    int arr[m][n];
    int t_arr[n][m];
    
    // taking input for arr[m][n]
    cout << "Input the array : " << endl;
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n ; j++)
        cin >> arr[i][j];
    } 
  
    //pritning the input for arr[m][n]
    cout << endl << "Array before transpose : "<< endl;
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n ; j++)
        cout << arr[i][j] << " ";
      cout << endl;
    } 
    
    cout << endl;

/* transposing the array arr and storing it in itself.   
    for(int i=0; i<n;i++)
    {
      for(int j=0; j<i; j++)
      {
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
      }
    }
*/ 

// transpose the array arr and store it in array t_arr
    for(int i=0; i<n;i++)
    {
      for(int j=0; j<m; j++)
      {
        t_arr[i][j] = arr[j][i];
      }
      cout << endl;
    }

    cout << endl << "t_arra : " << endl;  
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m ; j++)
        cout << t_arr[i][j] << " ";
        
      cout <<  endl;
    }

    // now swapping row 0 with row n-1, row 2 with row n-2 and so on
    for(int j =0; j<m; j++)
    {
      int i1=0, i2=n-1;
      while( i1<i2)
      {
        int temp = t_arr[i1][j];
        t_arr[i1][j] = t_arr[i2][j];
        t_arr[i2][j] = temp;
        i1++;
        i2--;
      }
    }
    
        cout << endl <<  "Answer matrix : " << endl;    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m ; j++)
        cout << t_arr[i][j] << " ";
        
      cout <<  endl;
    }

    return 0;
}