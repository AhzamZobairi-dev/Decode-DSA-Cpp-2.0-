//  Find the second largest element in the given Array in one pass.

#include <iostream>
#include <climits>
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
    
    int max,sec_max;
    max=INT_MIN;
    sec_max=INT_MIN;

    for(int i=0;i<=n-1; i++)
    {
        if(a[i]>max)
        {
            sec_max = max;
            max = a[i];
        }
        else if(a[i]>sec_max && a[i] < max)
        {
            sec_max = max;
        }

    }

    cout << "The Second Element of Array : " << sec_max <<endl;
    cout << "The Elements of Array is : ";
    for(int i=0; i<n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}