// Method 2 -- without using extra spaces  -- TWO POINTER METHOD 

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

/*  We are receiving vector v as value not reference and printing the vector v.
-- if we pass reference it will change the vector which we do not want. As
we need the actual array later in another function.
*/ 
void two_ptr_while(vector<int> v)
{
    cout << "In while Function " ; 
    int i=0, j=v.size()-1;
    while(i<j)
    {
      if(v[i]==0) i++;
      else if(v[j] == 1)  j--;
      else if(v[i] ==1 && v[j] == 0)
      {
        v[i]=0; v[j]=1;
        i++; j--;
      }
    }
    op(v);
}

/* We are receiving vector v as reference and so any change in v will change the
vector arr directly as they are pointer so same elements
*/

void two_ptr_for(vector<int> &v)
{
    cout << "In For function  "; 
    int i=0, j=v.size()-1;
    for(i,j; i<j;)
    {
      if(v[i]==0) i++;
      else if(v[j] == 1)  j--;
      else if(v[i] ==1 && v[j] == 0)
      {
        v[i]=0; v[j]=1;
        i++; j--;
      }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in array : "; 
    cin >> n;
    
    vector <int> arr(n);
    cout << "Enter the array : "; 
    for(int i=0; i<n; i++)
      cin >> arr[i];
      
    op(arr);
    two_ptr_while(arr);   // pass by value -- no change in arr after function call
                        // thats why we have print arr in side two_ptr_while function
    two_ptr_for(arr);   // pass by refrence -- changes the arr after function call
    op(arr);            // print arr after function call ends.
    
    return 0;
}