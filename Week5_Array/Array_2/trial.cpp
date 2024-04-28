#include <iostream>
#include <vector>
using namespace std;

void op(vector<int> v)
{
  for(int i=0; i<v.size(); i++)
    {
      cout << v[i] << " ";
    }
  cout << endl;
}

void reverse(vector<int>& v, int i, int j)
{
  while(i<j )
  {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
  }
}
int main() 
{
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++)
  {
     cin >> v[i];
  }
  op(v);
  int i,j;
  cin >> i >> j;
  reverse(v,i,j);
  op(v);
}