#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);   // declared and initialized with 0's
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << v[0] << endl << endl << endl;

    vector<int> v2(5,7); // declared and initialized with 7
    cout << v2.size() << endl;
    cout << v2.capacity() << endl;

    cout << v2[0] << endl;
    
    return 0;
}
