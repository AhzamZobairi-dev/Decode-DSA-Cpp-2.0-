// 01. Count the number of elements strictly greater than x.

#include <iostream>
#include <vector>
using namespace std;

void Count(vector<int> v, int x){
  int count=0;
  for(int i=0; i<v.size(); i++)
  {
    if(v[i]>x)  count++;
  }
  cout << "Total element greater than " << x << " is : " << count;
}

int main()
{
  int n;
  cout << "Enter the number of element : "; 
  cin >> n;
  
  cout << "Enter the array : ";
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin >> v[i];
  
  int x; 
  cout << "Enter the threshold value : ";
  cin >> x;
  Count(v,x);
  
  return 0;
}