#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : " ;
    cin >> n;

    int arr[n];
    cout << "Enter the array : " ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i=0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of Array : " << sum << endl;

    return 0;
}