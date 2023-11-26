#include<iostream>
using namespace std;

int main()
{

    float rad ;
    float pi = 3.1415;
    
    cout << "Enter the Radius : ";
    cin >> rad;

    float Area = pi*rad*rad;
    cout << "Area is : " << Area << endl;
    return 0;
}
