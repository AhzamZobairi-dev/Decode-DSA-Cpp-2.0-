/*          Check if an array is a subset of another .

This Question is mentioned in the C++ Assignments | Arrays - 3 | Week 5 
    -- https://drive.google.com/file/d/11L_SB7-qV_3b-edRI6Z1Ljjc4uxHJEJA/view

but not in the solution of C++ Assignments | Arrays - 3 | Week 5

*/


#include <iostream>
#include <vector>
using namespace std;

void subsetArray(vector<int> set, vector<int> subset)
{
    int n = set.size();
    int m = subset.size();
    int count = 0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; i<n; j++)
        {
            if(subset[i] == set[j])
            {
                count++;
                break;
            }
        }
    }
    if(count == m)
        cout << "Subset Array is present" << endl;
    else 
        cout << "Subset Array is not present" << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> set(n);
    cout << "Enter the elements of the array: ";
    for(int i =0; i<n; i++)
        cin >> set[i];

    int m;
    cout << "Enter the size of subset of the array: ";
    cin >> m;

    vector<int> subset(m);
    cout << "Enter the elements of the subset array: ";
    for(int i =0; i<m; i++)
        cin >> subset[i];

    subsetArray(set, subset);

    return 0;
}