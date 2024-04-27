#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 4, 8, 2, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int *ptr = arr;

    cout << ptr<<endl;
    cout << arr<<endl;
    cout << &arr[0] << endl;

// similar to a[i], we can access the array directly by ptr[i];
    cout << arr[0] << endl;
    cout << ptr[0] << endl;

// Using arr to acess array
    cout << "Using Arr"<<endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";      // can also use i[arr] instead
    cout << endl;

// using ptr to acess array
    cout << "Using ptr variable"<<endl;
    for(int i=0; i<size; i++)
        cout << ptr[i] << " ";      // can also use i[ptr] instead
    cout << endl;
    
// using pointers to access array
    cout << "Using pointers arithmetics"<<endl;
    for(int i=0; i<size; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
/* 
Now the ptr is not pointing to the start of array, because
it is now incremented
   for eg 
    index        0    1    2    3    4    5
    array --  {  6,   4,   8,   2,   1,   3};
    address    x20  x24  x28  x32  x36   x40

    ptr = arr;  ptr is pointing to x20

    for(int i=0; i<size; i++)
    {
        cout << *ptr << " ";   o/p -- 6,  4,  8,  2,  1, 3
        ptr++;              ptr --      x24,x28,x32,x36,x40,x44
    } 

We have lost the pointer to array as it is now pointuing to address
x44
Need to reinitialize it again.

    index        0    1    2    3    4    5
    array --  {  6,   4,   8,   2,   1,   3};
    address    x20  x24  x28  x32  x36   x40
*/

    ptr = arr;      // ptr --> arr[0] --> x20
    *ptr = 80;      // *(x20) == arr[0] = 80;
    ptr++;          // ptr --> x24
    *ptr = 90;      // *(x24) == arr[1] = 90;
    ptr--;          // ptr --> x20 i.e points to the first element of array

    cout << "After reinitializing and updating aarray"<<endl;
    for(int i=0; i<size; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
    
    return 0;
}