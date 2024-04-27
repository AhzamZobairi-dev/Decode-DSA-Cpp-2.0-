#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(6);  
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(10);

//for accessing     v[2] and v.at(2) is same 
    cout << v[2] << endl;
    cout << v.at(2) << endl;

    v[2] = 19;
    cout << v[2] << endl;

    v[3] = 11;
    cout << v.at(3) << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}