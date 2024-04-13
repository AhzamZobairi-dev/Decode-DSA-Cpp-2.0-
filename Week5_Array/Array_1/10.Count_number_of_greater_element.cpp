#include <iostream>
//#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in Array : ";
    cin>>n;

    int a[n];
    cout << "Enter the elements of Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int x;
    cout << "Enter a number we need to look greater than : ";
    cin >> x;

    int count=0;
    for(int i=0; i<n ; i++)
    {
        if (a[i]>x)
        {
            count++;
        }    
    }

    cout << "Total of " << count << " elements are greater than " << x;

    return 0;
}