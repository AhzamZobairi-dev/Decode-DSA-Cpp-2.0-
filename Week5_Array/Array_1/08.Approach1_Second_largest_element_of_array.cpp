#include <iostream>
#include <climits>
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

    int max, sec_max; 
    max = sec_max = INT_MIN;    

    for(int i=0;i<n;i++)
    {
       if(a[i]>max)     max=a[i];
    }
    for(int i=0; i<n ; i++)
    {
        if(a[i]>sec_max && a[i] != max)
            sec_max = a[i];
    }
    
    cout << "The Second Element of Array : " << sec_max <<endl;
    return 0;
}