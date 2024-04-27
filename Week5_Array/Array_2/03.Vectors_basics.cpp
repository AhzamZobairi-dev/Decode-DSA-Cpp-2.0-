#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
// inserting/input to vector uses push_back, should not use []    
    v.push_back(6);
    cout << v.size() << endl;           // 1
    cout << v.capacity() << endl;       // 1

    v.push_back(1);
    cout << v.size() << endl;           // 2
    cout << v.capacity() << endl;       // 2
    
    v.push_back(9);
    cout << v.size() << endl;           // 3
    cout << v.capacity() << endl;       // 4

    v.push_back(10);
    cout << v.size() << endl;           // 4
    cout << v.capacity() << endl;       // 4

// if you want to update/access the vector
    v[0] = 88;
    cout << v[0] << " ";        // 88
    cout << v[1] << " ";        // 1
    cout << v[2] << " ";        // 9
    cout << v[3] << " ";        // 10
   
}