// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

// Constarains sorted array  -- -3.-2.0, 1,2,3, 5,6
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of Array: " ;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x=1;
    int flag = false;       // no missing elements
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= 0 )    
            continue;
        else if(arr[i] != x)
        {
            flag = true;
            cout << "Missing number is :"<< i+1;
            break;
        }
        else 
            x++;        
    }

    if(flag == false)
        cout << "No Missing Elements"; 
   // cout << "The smallest missing positive element in the sorted Array that contains only positive elements is: " << missing << endl;

    return 0;
}