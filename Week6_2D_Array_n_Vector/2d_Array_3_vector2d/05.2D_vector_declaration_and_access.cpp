#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  int arr[3][4];
/*
    0 1 2 3  --> 4 columns
  0  - - - - 
  1  - - - -
  2  - - - -
` ^ 3 rows
*/

/*  we wil declare a 2d vector for an array[3][4]
    
    vector<int> v(3,2)); -- does not makes sense as in 1d vector the second arg in v is used
    as default value meanig all element of vector v (i.e 3 here) is 2. So we needed to give 
    vecor instead.
*/ 
  vector<vector<int>> v0(3, vector<int> (4)); // now 2d-vector of size 3x4 is declared
  cout << v0[0][0] << endl;
  
  vector<vector<int>> v(3, vector<int> (4, 2)); 
/* vector<int> (4, 2) -- we are making a vector of size 4 with deafult value 2 then,
    inserting it thrice in the array.
*/ 
  for(int i =0; i<3; i++)
  {
    for(int j=0; j<4; j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  
  // Printing the number of rows
  cout << "Number of rows: " << v.size() << endl;   // prints number of vectors in v
  cout << "Number of cols: " << v[0].size() << endl;  // number of elements in v[0]

// using row and col value to print value
  cout << endl << "Using size" << endl;
  for(int i =0; i<v.size(); i++)
  {
    for(int j=0; j<v[0].size(); j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}