/*      Vector Functions covered

    -- push_back()
    -- vector.size() 
    -- vector.capacity()

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(6);  
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(10);
    v.push_back(6);  
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(10);
    v.push_back(6);  
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(10);
    
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
   
}