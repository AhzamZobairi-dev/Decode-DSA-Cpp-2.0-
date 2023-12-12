#include <iostream>
using namespace std;

int main() 
{
    int test = 0;
    float f = 3.111;
    cout << (test > 0 ? f : 0) << endl;     // condition is false as 0 == 0, so output will be 0

    return 0;
}