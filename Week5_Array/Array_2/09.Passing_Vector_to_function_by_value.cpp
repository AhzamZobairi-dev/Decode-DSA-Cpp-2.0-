#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> value)  // creates a new vector named value.

{
    value[0] = 100;
    cout << "From Change : ";
    for(int i = 0; i < value.size(); i++)
    {
        cout << value[i] << " ";
    }
    cout << endl;
}


int main()
{
    vector<int> v;
    v.push_back(6);  
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(10);

    cout << "From main : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    change(v);

    cout << "Back to main : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

}