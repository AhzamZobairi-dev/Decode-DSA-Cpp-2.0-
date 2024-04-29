// 03. Check if the given array is sorted or not
#include <iostream>
#include <vector>
using namespace std;


int main()
{
  int n; 
  cout << "Enter the number of element : ";
  cin >> n;
  bool flag = true;   //sorted

  cout << "Enter the array : ";
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin >> v[i];
  
  for(int i=0; i<n-1; i++)
  {
    if(v[i]>v[i+1])
    {
      flag = false;
      break;
    }
  }
  
  if(flag)  cout << "Sorted";
  else      cout << "Unsorted";
  
  return 0;
}

