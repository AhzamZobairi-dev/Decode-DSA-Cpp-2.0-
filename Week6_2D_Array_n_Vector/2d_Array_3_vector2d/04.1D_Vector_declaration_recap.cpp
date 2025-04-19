#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    //vector <int> v; // vector v is declared without any size
    //cout << v[0];  it cannot be accessed as the number of element is not defined
    
    vector<int> v(4); // vector declared with 4 element and all elemnt is 0 by default
    cout << v[0] << endl;     // zero
/*
    when a vector is declared with size then we must use index to place value in element of vector. Since all the 
    elements are initialized to 0 by default and when we try push_back() it will increase the size of vector by pushing
    a value back to the vector 

*/ 
    vector<int> w(5,2);// vector is declared of 5 elament and each with default value of 2
    cout << w[0] << endl;
    cout << w[1] << endl;
    cout << w[2] << endl;
    cout << w[3] << endl;
    cout << w[4] << endl;
  
    vector <int> x;
    //x[0] = 1;                 segmentation fault
    x.push_back(1);           // here push_back() is used to add element at the end of vector
    cout << endl << x[0] << endl;


}