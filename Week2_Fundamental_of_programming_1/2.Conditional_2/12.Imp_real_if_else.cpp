#include <iostream>
using namespace std;

int main() 
{
    int a;
    if  (3 + 2 % 5)     // if(5)
        cout << "This works" << endl;
    if(a =10)           // here first the value 10 is assigned to a and then if(a) => if(10)
        cout << "Even this works" << endl;
    if(-5)
        cout << "Surprisingly Even this works " << endl;

    return 0;
}

/*
IF checks only boolean in its expression and any non zero integer is TRUE so in above we have if(5), if(10), if(-5) all True

OUTPUT
This works
Even this works
Surprisingly Even this works

*/ 