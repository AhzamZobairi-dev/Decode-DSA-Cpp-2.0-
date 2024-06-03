// Method 1 -- using extra spcae

#include <iostream>
#include <vector>
using namespace std;

void op(vector<int> v)
{
  for(int i=0; i<v.size(); i++)
      cout << v[i] << " ";

  cout << endl;
}

void sort_0_1(vector<int> &v)
{
  int num_0=0, num_1=0, n=v.size();

  for(int i=0; i<n; i++)
  {
    if(v[i] == 0)   num_0++;
    else            num_1++;
  }
  
  for(int i=0; i<n; i++)
  {
    if(i<num_0)   v[i] = 0;
    else          v[i] = 1;
  }
}

int main()
{
  int n;
  cout << "Enter the number of elements in array : "; 
  cin >> n;
  
  vector <int> v(n);
  cout << "Enter the array : "; 
  for(int i=0; i<n; i++)
    cin >> v[i];
  
  sort_0_1(v);
  op(v);

  return 0;
}