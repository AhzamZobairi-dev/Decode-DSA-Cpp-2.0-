/*  What will we check

    Accesing the elements of the array in another function
        -- we can do it, example Display function
    
    Updating the  elements of the array from other functions
        -- We can update the array, e.g in function Change
    
    Is it pass by reference or pass by value
        -- Pass by reference because we passed on the address of arr in both Display and Change functions
 

*/


#include <iostream>
using namespace std;


void Display(int a[], int size)        // we can give size of array in [] but not needed
{
//int size = sizeof(a)/sizeof(a[0]);   sizeof(a) will return the size of the pointer not the size of the array
    for(int i=0; i<size; i++)
    {
        cout << a [i] << " ";
    }
    cout << endl;
}

void Change(int b[])    // Check if we can update and is it pass by reference or pass by value
{
    b[0]=100;
}
int main()
{
    int arr[] = {6, 4, 8, 2, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);  // works here because array is defined and declare here but 
                                            // will not work in any other function
    Display(arr,size);
    Change(arr);
    Display(arr,size);

    return 0;
}