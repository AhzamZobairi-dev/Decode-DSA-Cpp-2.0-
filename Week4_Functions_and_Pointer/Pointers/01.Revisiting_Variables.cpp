#include <iostream>
using namespace std;

int main()
{
    int n=5;        
    cout << &n << endl;     //0x61ff0c
    
    char c='a';
    cout << &c << endl;     //a♣
    cout<< (void *) &c <<endl; //0x61ff0b

    float f = 5 ;
    cout << &f << endl;     //0x61ff04
    

    int i = 10, j = 11;
    cout << &i << endl;     //0x61ff00
    cout << &j << endl;     //0x61fefc
    return 0;
}