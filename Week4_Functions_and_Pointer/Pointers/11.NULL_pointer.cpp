#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    cout << ptr << endl;
    cout << *ptr << endl;

    int *ptr2=NULL;
    cout << ptr2 << endl;
    //cout << "?" << *ptr2 << endl;

    int *ptr3=0;
    cout << ptr3 << endl;
    //cout << "?" << *ptr3 << endl;

    int *ptr4='\0';
    cout << ptr4 << endl;
    //cout << "?" << *ptr4 << endl;

    return 0;
}