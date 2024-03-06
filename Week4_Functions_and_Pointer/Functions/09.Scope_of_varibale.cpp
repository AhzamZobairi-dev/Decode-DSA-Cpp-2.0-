#include<iostream>
using namespace std;

int a=9;        // a is declare outside of any code block and any one can access it -- GLOBAL VARIBALE

int func()
{
//  cout << x << endl;   -- error: 'x' was not declared in this scope meaning x is only acessible 
//                          inside of main function as it is delcared there
    
    cout << a << endl;     // Global Variable -- accessible here
}

int main()              
{
    int x=4;     // x is declare and its scope lies with the main function only -- LOCAL VARIABLE
    func();
}