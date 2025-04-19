#include <iostream>
#include <vector>
 
using namespace std;

/**
 * Modifies a 2D vector by setting the element at the first row and third column to 100.
 *
 * @param B A reference to a 2D vector of integers. The function assumes that the vector
 *          has at least one row and that each row has at least three columns.
 */
void change_vector(vector<vector<int>> &B)
{
  B[0][2] = 100;
}

void change_vector_2(vector<vector<int>> B)  // did not passed any size but works.
{
  B[0][2] = 100;    // creates an another vector and changes it.
}
 
void size(vector<vector<int>> &v)
{
  cout << "size of v : " << v.size() << endl;
  cout << "size of v[0] : " << v[0].size() << endl;
  cout << "size of v[1] : " << v[1].size() << endl;
  cout << "size of v[2] : " << v[2].size() << endl;
}
 
int main() {
    vector<int> v1(3);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;
    v1[4] = 77;
 
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
 
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
 
    vector<vector <int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
/*
         v1    1 2 3
    v    v2    4 5
         v3    6 7 8 9 10
 
 
*/    
    cout << v[0][2] << endl;
    change_vector_2(v);
    cout << v[0][2] << endl;
    change_vector(v);
    cout << v[0][2];
    
    //size(v);
 
    return 0;
}