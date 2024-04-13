#include <iostream>
using namespace std;

int main()
{
    // declare and int array of 18 elements
    int arr[] = { 3, 1, 32, 67, 6, 56, 8, 9, 87, 10, 1, 22, 17, 14, 9, 106, 13, 18};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << n;
    return 0;
}