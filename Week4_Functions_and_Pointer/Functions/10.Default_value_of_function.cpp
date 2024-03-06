
#include <iostream>
using namespace std;

void func(int x, int y)     // No default value -- func needed to be called with actual parameter  func(x,y) or
//                             else there will be error e.g func(), func(1),
{
    cout <<"func : " << x << " " << y << endl;
}

void funct(int x=3, int y=9)        // given the default value -- can call funct with or without actual parameter
//                                     funct(x,y) , funct(5,6) , funct(), funct(5) all are correct.
// we neede to provide both default value in formal argument or else it will be incorrect 
// XXXX--- void funct(int x=3, int y)  or void funct(int x, int y=9)  are incorrect approach            
{
    cout <<"funct : " << x << " " << y << endl;
}

int main()
{
    int x=5,y=7;
    func(x,y);      // WORKS        o/p  5 7
//  func();         -- ERROR

    funct(x,y);      // WORKS       o/p  5 7
    funct();         // WORKS       o/p  3 9
    funct(4);        // WORKS       o/p  4 9
    
}