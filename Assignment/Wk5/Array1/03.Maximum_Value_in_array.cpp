//  Find the minimum value out of all elements in the array.

#include <iostream>
using namespace std;

int main()
{
    int n;        // 18
    cout << "Enter the number of elements in the array : ";
    cin>>n;
    
    int a[n];    //    3 1 32 67 6 56 8 9 87 10 1 22 17 14 9 106 13 18
    cout << "Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int max = a[0];

    for(int i=0; i<=n-1; i++)
    {
        if(a[i]>max)    max= a[i];
    }

    cout << " The Maximum value of element in the array is : "
         << max << endl;



    return 0;
}