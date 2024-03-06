#include <iostream>
using namespace std;

int Sum(int a, int b)           // Formal Argument
{
    return a+b;
}


int main()
{
    cout << Sum(3,4)<<endl;     // Actual Argument

    cout << Sum('a','b')<<endl; // Actual Argument

    int x,y;
    cin >> x >>y;
    cout << Sum(x,y);           // Actual Argument
    return 0;
    
}