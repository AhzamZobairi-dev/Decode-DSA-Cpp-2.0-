/*
Find the output for this code. Let input:- 2 3 6

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give ‘x’ a value.
    int y, m;
    cout << "Enter second number and value for taking modulus\n";
    cin >> y >> m; // user will give ‘y’ a value.
    int Z = (x * y) % m;
    cout << "Output is: " << Z;
}


Solution --

1. Dry Run
    - First we will put 2 in x
    - Then in second number y we will place 3 and then value for taking modulus i.e 6 is stored in m
    - Calculating  [ Z = (x * y) % m ]  => (2*3)%6 => 6%6 => 0. So Z=0

2. Output

0

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give ‘x’ a value.
    int y, m;
    cout << "Enter second number and value for taking modulus\n";
    cin >> y >> m; // user will give ‘y’ a value.
    int Z = (x * y) % m;
    cout << "Output is: " << Z;
}