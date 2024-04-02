#include <iostream>
using namespace std;

int main()
{
    int n=1;
    int *ptr = &n;

    cout << endl;
    cout << "Value in n is " << n 
         << " address of " << &n << endl;
    
    cout << "Value in ptr is " << *ptr 
         << " address stored inside ptr " << ptr 
         << " the address of ptr itself " << &ptr << endl;

    int **dptr = &ptr;

    cout << "Accessing value in a " << **dptr 
         << " Value in ptr is " << *dptr 
         << " address stored inside dptr " << dptr 
         << " the address of dptr itself " << &dptr << endl << endl;
    
    
    return 0;
}