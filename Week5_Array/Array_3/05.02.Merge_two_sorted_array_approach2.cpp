/*  Pre-cursor to leet code -188

We will make function that will retrun a new array
*/

#include <iostream>
#include <vector>
using namespace std;

void op(vector<int> v)
{
  for(int i=0; i<v.size(); i++)
      cout << v[i] << " ";

  cout << endl;
}
vector<int> merge(vector<int> arr1, vector<int> arr2)
{
    int i=0, j=0, k=0;
    int n = arr1.size(), m = arr2.size();
    vector<int> arr(n+m);

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
    if(j==m) 
    {
        while(i<n)
        {
            arr[k] = arr1[i];
            i++; 
            k++;
        }
    }
    return arr;
}


int main()
{
    int n1;
    cout << "Enter size of first array : ";
    cin >> n1;

    vector<int> arr1(n1);
    cout << "Enter the first array : ";
    for(int i=0; i<n1; i++)
        cin >> arr1[i];

    int n2;
    cout << "Enter size of second array : ";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter the second array : "; 
    for(int i=0; i<n2; i++)
        cin >> arr2[i];

    
    op(arr1);  
    op(arr2); 
    vector<int> arr = merge(arr1,arr2);
    
    op(arr);
}