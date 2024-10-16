//#2D-Array

#include <iostream>
using namespace std;

int main() 
{
  /*
    int arr[][3];     we must give column when we are just declaration and not initializing
    arr = {1,2,3,4,5,6,7,8,9}   this is not correct way 
  
  */
  // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};     -- correct declaration and initialization
  //  or
  // int arr[][3] = {1,2,3,4,5,6,7,8,9};  -- correct even row is not given but initialization
  // is done at same time
  
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  
  
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  
    return 0;
}