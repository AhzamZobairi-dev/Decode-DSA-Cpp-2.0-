#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    cout << "V1[0]: " << v1[0] << endl;   // op - 1
    cout << "V1[5]: " << v1[5] << endl;     // gives some garbage value 


    vector<int> v2(2);
    v2[0]=4;
    v2[1]=5;

    cout << "V2[0]: " << v2[0] << endl;   // op - 4
    cout << "V2[5]: " << v2[5] << endl;     // gives some garbage value 

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
/*
    v =     1  2  3
            4  5
*/


    cout << "V[0][0]: " << v[0][0] << endl;  // op - 1
    cout << "V[0][5]: " << v[0][5] << endl;    // gives some garbage value

    cout << "V[1][0]: " << v[1][0] << endl;  // op - 4
    cout << "V[1][5]: " << v[1][3] << endl;    // gives some garbage value
}