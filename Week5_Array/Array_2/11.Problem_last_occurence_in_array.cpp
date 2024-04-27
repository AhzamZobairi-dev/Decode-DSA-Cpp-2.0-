// Question: Find the last occurence of x in the array.

#include <iostream>
#include <vector>

using namespace std;

void find(vector<int> val, int x)
{
    int idx=-1;
    for(int i=0; i<val.size(); i++)
    {
        if(val[i]==x)   idx = i;
    }
    if(idx==-1) cout << "No such element is in the array" << endl;
    else        cout << idx << endl;

}

void opt_find(vector<int> val,int x)
{
    int idx=-1;
    for(int i=val.size()-1; i>=0 ; i--)
    {
        if(val[i]==x)   
        {
            cout << i; 
            idx = i;
            break;
        }
        
    }

    if(idx==-1) cout << "No such element is in the array" << endl;

}
int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    vector<int> v;
    cout  << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int x;
    cout << "Enter the element to be searched : ";
    cin >> x;

    find(v, x);         // brute force -- unoptimized

    opt_find(v, x);     // optimized code
    return 0;
}
