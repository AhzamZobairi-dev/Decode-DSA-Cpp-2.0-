#include <iostream>
using namespace std;

int main()
{
    int arr[7]; // 0 1 2 3 4 5 6 7
    
    arr[0] = 7;     // initialization
    arr[1] = 1;
    arr[2] = 6;
    arr[3] = 3;
    arr[4] = 9;
    arr[5] = 7;
    arr[6] = 0;

    cout << arr[0] << endl;

    int arr1[7] = {7,1,6,3,9,7,0}; // better initialization
//  int arr1[] = {7,1,6,3,9,7,0};       is correct as well

    cout << arr1[4] << endl;

    // we will use loops to print the array arr1
    cout << endl<<"This is arr1" << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << arr1[i] << " ";
    }

//  TAKING INPUT AND PRINT ING OUTPUT USING LOOP;
    int arr3[7];

    cout << endl << "Enter seven number: ";
    for(int i=0; i<=6; i++)
    {  
        cin >> arr3[i];
    }

     for(int i=0; i<=6; i++)
    {  
        cout << arr3[i] << " ";
    }

}