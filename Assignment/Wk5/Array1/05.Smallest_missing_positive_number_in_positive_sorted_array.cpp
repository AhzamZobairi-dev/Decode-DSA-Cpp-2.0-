// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

// Constrains -- +ve sorted array -- 1,2,3,5,6  missing 4

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int flag = false;       // no missing elements
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != i+1)
        {
            flag = true;
            cout << "Missing number is :"<< i+1;
            break;
        }        
    }

    if(flag == false)
        cout << "No Missing Elements"; 
   // cout << "The smallest missing positive element in the sorted Array that contains only positive elements is: " << missing << endl;

    return 0;
}