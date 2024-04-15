#include <iostream>
using namespace std;

int main()
{
    int n;        // 18
    bool not_duplicate = true;
    cout << "Enter the number of elements in the array : ";
    cin>>n;
    
    int a[n];    //    3 1 32 67 6 56 8 9 87 10 1 22 17 14 9 106 13 18
    
    cout << "Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<=n-1; j++)         //  &&  (i != j && i<j)
        {
            if((a[i] == a[j]))
            {
                cout << "The Duplicate element is : " << a[i] <<
                        " at index : " << i << " and " << j << endl;
                not_duplicate = false;
            }
        }
    }

    if(not_duplicate)    cout << "There is no duplicate element"<< endl;

    return 0;
}