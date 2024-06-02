/* Pre-cursor to leet code -188
    We will approach the array from front to back and compare both arrays and place result
    in the third array.

    Will make a function of void return type and will calculate resultant array inside of
    that function 
*/

#include <iostream>
#include <vector>
using namespace std;
void op(vector<int> v)
{
  for(int i=0; i<v.size(); i++)
    {
      cout << v[i] << " ";
    }
  cout << endl;
}

void merge(vector<int> arr1, vector<int> arr2, vector<int> &arr)
{
    int i=0, j=0, k=0;
    int n = arr1.size(), m = arr2.size();
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j] )
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    if(i==n)
    {
        while(j<m)
        {
            arr[k] = arr2[j];
            j++; 
            k++;
        }
    }
    else 
    {
        while(i<n)
        {
            arr[k] = arr1[i];
            i++; 
            k++;
        }
    }
}

int main()
{
    int n1;
    cout << "Enter size of first array : ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the first array : ";
    for(int i=0; i<n1; i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter size of second array : ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the second array : "; 
    for(int i=0; i<n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> arr(n1+n2);
    op(arr1);  
    op(arr2);
    merge(arr1,arr2,arr);
    op(arr);
}

/*
TC -- 

5
8
1 4 5 7  8  
2 3 6 7 10 11 13 15
*/