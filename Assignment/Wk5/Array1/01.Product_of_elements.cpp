// Calculate the product of all the elements in the given array.

#include <iostream>
using namespace std;

int main()
{
    int n,product=1;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i <= n-1; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i <=n-1; i++)
    {
        product = product * arr[i];
    }

    cout << "The product of all the elements in the array is " << product << endl;

    return 0;
}
