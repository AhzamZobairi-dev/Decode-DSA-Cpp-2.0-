#include <iostream>
#include <vector>
using namespace std;

void op(vector<int> v)
{
  for(int i=0; i<v.size(); i++)
      cout << v[i] << " ";

  cout << endl;
}


int main()
{
    int n; 
    cout << "Enter the number of elements in array : "; 
    cin >> n;
    
    vector<int> v(n);
    cout << "Enter the array : "; 
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    op(v);
    
    int i=0, j= n-1;
    for(i,j; i<j; )
    {
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[j]<=0 && v[i]>=0 ) // <= & >= is for including 0 
        {
// we cannot swap without extra variable for safety when dealing with
// one element array
            int temp= v[i];
            v[i]=v[j];
            v[j] = temp;
        }
    }
    op(v);

    return 0;
}