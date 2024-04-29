// 04. Find the difference between the sum of elements at even indices 
// to the sum of elements at odd indices.

#include <iostream>
#include <vector>
using namespace std;

void Sum(vector<int> v){
  int sum=0;
  for(int i=0; i<v.size(); i++){
    if(i%2==0)  sum += v[i];
    else        sum -= v[i];
  }
  cout << sum;
}

int main(){
  int n; 
  cout << "Enter the number of element : ";
  cin >> n;

  cout << "Enter the array : ";  
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin >> v[i];
  
  Sum(v);
  return 0;
}


