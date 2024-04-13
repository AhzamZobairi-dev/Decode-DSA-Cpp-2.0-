#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 7, 8, 9};

    cout << &arr << endl;       // address of array is same as the address of 
                                // first byte of first element 
    cout << arr << endl;        // Same as the &arr 
    
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
}