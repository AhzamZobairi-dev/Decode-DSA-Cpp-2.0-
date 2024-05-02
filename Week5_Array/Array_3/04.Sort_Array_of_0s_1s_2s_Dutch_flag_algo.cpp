//          Method 2 -- Leet Code -75 Sorting colour

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

void sort_dutch(vector<int> &v)
{
    int lo=0,mid=0,hi=v.size()-1;
    while(mid<=hi)
    {
        if(v[mid]== 0)
        {
            int temp = v[lo];
            v[lo] = v[mid];
            v[mid] = temp;
            lo++;
            mid++;
        }
        else if(v[mid]==1)  mid++;
        else if(v[mid]==2)
        {
            int temp = v[hi];
            v[hi] = v[mid];
            v[mid] = temp;
            hi--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in array : "; 
    cin >> n;
    vector<int> v(n);
    cout << "Enter the array : "; 
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    op(v);
    
    sort_dutch(v);
    op(v);

    return 0;
}