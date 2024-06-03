/*      Move all zeros to the end of the array.

    -- this question is not present in the C++ Assignments | Arrays - 3 | Week 5
       but it is present in the C++ Assignments | Arrays - 3 | Week 5 solution

    -- Catch is we need to maintain the order of the elements and move
       all zeros to the end of the array.
    
    -- using in-built swap function instead of user defined function, if needed we can create it.

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

void moveZeros(vector<int> &arr)
{
    int n = arr.size();
    int j = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    op(arr);
    moveZeros(arr);
    op(arr);

    return 0;
}