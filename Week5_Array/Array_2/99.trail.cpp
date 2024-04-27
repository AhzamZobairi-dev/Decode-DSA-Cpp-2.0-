// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);    
    v.push_back(2);    
    v.push_back(3);
    
    for (int i = 0; i<v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;

    vector <int> v1(v);
    for(int i = 0; i<v1.size(); i++)
        cout << v1.at(i) << " ";
    cout << endl;
    
    return 0;
}