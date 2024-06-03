/*    Find the factorial of a large number.

  -- the implementation is done using array, we can use vector interchangably
*/ 

#include <iostream>
using namespace std;

int mul(int x, int res[], int res_size){

  int carry = 0;

  for (int i = 0; i < res_size; i++) {
    int prod = res[i] * x + carry;
    res[i] = prod % 10 ;
    carry = prod / 10 ;
  }

  while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
  }

  return res_size;
}

int main() 
{
  int n;
  cout << "Enter the number: ";
  cin>>n;
  int res[500];
  res[0] = 1;
  int res_size = 1;

  for (int i=2; i<=n; i++)
  {
    res_size = mul(i, res, res_size);
  }

  cout << "Factorial of the number is: ";
  for(int i =res_size-1; i>=0;i--)
  {
    cout << res[i];
  }

  return 0;
}  
  
