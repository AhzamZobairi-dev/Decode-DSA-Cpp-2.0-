//          Method 1 -- Leet Code -75 Sorting colour -- Brute Force

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

void sort_0_1_2(vector<int> &v)
{
    int zero=0,one=0,two=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==0)
            zero++;
        else if(v[i]==1)
            one++;
        else
            two++;
    }
    for(int i=0; i<v.size(); i++)
    {
        if(i<zero)  v[i] = 0;
        else if(i<zero+one) v[i] = 1;
        else            v[i] = 2;
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
    
    sort_0_1_2(v);
    op(v);

    return 0;
}