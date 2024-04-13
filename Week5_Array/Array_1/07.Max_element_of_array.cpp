#include <iostream>
#include <climits>
//#include <bits/stdc++.h>
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

    int maximum = INT_MIN
    for(int i=0; i<n; i++)
    {
        if(maximum < a[i])  maximum=a[i];
    }

    // for(int i=0; i<n; i++)
    // {
    //     maximum = max(maximum,a[i]);
    // }

    cout << "Maximum : " << maximum;


    return 0;
}