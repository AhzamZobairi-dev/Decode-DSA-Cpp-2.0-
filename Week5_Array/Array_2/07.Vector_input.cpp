#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);
    cout << "Enter the elements of vector : " ;
    for(int i = 0; i <v.size(); i++)
    {
        cin >> v[i] ;
    }
    for(int i = 0; i <v.size(); i++)
    {
        cout  << v[i] << " ";
    }
    cout << endl;
/* Creates when we do not have given size of vector
*/

    vector<int> v1;
    cout << endl << endl <<"Enter the elements of vector : " ;
    for(int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for(int i = 0; i <5; i++)
    {
        cout  << v1[i] << " ";
    }
    return 0;
}