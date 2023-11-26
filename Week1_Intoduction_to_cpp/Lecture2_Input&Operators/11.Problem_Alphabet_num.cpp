/*
Find the numbering of Upper case alphabet in the sequence of A to z
for ex;
    A -- 1
    B -- 2
    c -- 3
    .
    .
    .
    Z = 26

*/

/*
Solution -- Since the ascii value of A is 65, B is 66 and
so on with Z is 90

So if we subtract value of 64 from the types casted value of
character A i.e 65 we will get the number of A in the Alphabet 
sequence

*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a upper case character : ";
    cin >> ch;
    int num = int(ch)-64;
    cout << "The character number for "<< ch << " is "<< num << endl;

    return 0;
}