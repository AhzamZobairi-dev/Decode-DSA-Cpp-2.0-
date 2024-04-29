//07. If an array arr contains n elements, then check if the given array is a 
//palindrome or not.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void op(vector<int> v){
  for(int i=0; i<v.size(); i++)
      cout << v[i] << " ";
  cout << endl;
}

void Change(vector<int>& v)
{
  bool flag = true; // palindrome
  int i=0,j=v.size()-1;
  for(i,j; i<j; i++,j--)
  {
    if(v[i] == v[j])      continue;
    else{
      flag = false;
      cout << "Not Palindrome ";
      break;
    }    
  }

  if(flag) cout << "Palindrome";
}

int main(){
  int n; 
   cout << "Enter the number of element : ";
  cin >> n;
 
  cout << "Enter the array : "; 
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin >> v[i];
  
  op(v);
  
  Change(v);

  return 0;
}