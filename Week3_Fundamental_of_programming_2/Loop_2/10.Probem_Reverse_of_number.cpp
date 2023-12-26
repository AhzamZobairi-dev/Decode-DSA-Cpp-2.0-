//WAP to write reverse of given number

#include <iostream>
using namespace std;

int main()
{   
    int num,last=0,rev =0;
    cout << "Enter a Number : ";
    cin >> num;
    
    while(num>9)
    {
        last = num %10;
        rev = rev + last;
        rev *= 10;
        num /= 10;

    }
    cout << endl << rev+num;

    return 0;
}