#include <iostream>
using namespace std;

int main()
{
    int n=10;
    cout << n << endl;
    
    int *ptr = &n;
    
    cout << "Address of n" << &n << endl;
    cout <<"Address stored in ptr -- " <<ptr << endl;    // 0x61ff08
    cout <<"Address of ptr int pointer -- " <<&ptr << endl;  
    
    ptr = ptr + 1;
    cout <<"address in ptr int pointer after increment --" <<ptr << endl;    // 0x61ff0c 
    cout <<"Address of int pointer after increemnt --" <<&ptr << endl;
    cout << *ptr << endl;   // contains garbage value
    
    bool flag = false;
    bool *ptr1 = &flag;
    
    cout << &flag << endl;  // 0x61ff03
    cout << ptr1 << endl;    // 0x61ff03
    cout << &ptr1 << endl;  // 
    
    ptr1 = ptr1 + 1;
    cout << ptr1 << endl;   // 0x61ff04
    
    return 0;
}