// 05. Given an array of integers, change the value of all odd indexed elements 
// to its second multiple and increment all even indexed values by 10.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void op(vector<int> v){
  for(int i=0; i<v.size(); i++)
      cout << v[i] << " ";
  cout << endl;
}

void Change(vector<int>& v){
  for(int i=0; i<v.size(); i++){
    if(i%2==0)  v[i] += 10;
    else        v[i] *= 2;
  }
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
  op(v);
  
  return 0;
}