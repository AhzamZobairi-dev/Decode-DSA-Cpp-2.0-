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
/*
Needed to use INT_MIN instead of a[0] because in the array = {9,6,9,3,7}
the first element is the largest which will make condition in both "if and
else" false and the answer will be for sec max = a[0] which is 9 
*/ 

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            sec_max = max;
            max = a[i];
        }

        else if( a[i]>sec_max && a[i]<max)
        {
            sec_max = a[i];
        }
    }

    cout << "The Second Element of Array : " << sec_max <<endl;
    return 0;
}