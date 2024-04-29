// 02. WAP to find the largest three elements in the array.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
  int n; 
  cout << "Enter the number of element : ";
  cin >> n;
  
  cout << "Enter the array : ";
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin >> v[i];

  int mx=INT_MIN,sec_mx= INT_MIN,th_mx=INT_MIN;
  
  for(int i=0; i<n; i++)
  {
    if(v[i]>mx){
      th_mx = sec_mx;
      sec_mx =mx;
      mx=v[i];
    }
    else if(v[i]>sec_mx && v[i]<mx){
      sec_mx = v[i];
    }
    else if(v[i]>th_mx && v[i]<sec_mx)
      th_mx = v[i];
  }
  
  cout << "Three largest values are : "<< mx << "," << sec_mx << "," << th_mx;
  return 0;
}




