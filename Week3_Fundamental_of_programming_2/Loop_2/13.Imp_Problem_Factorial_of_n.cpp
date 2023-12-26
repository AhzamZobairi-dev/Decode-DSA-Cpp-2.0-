// Ques : Print the factorial of a given number 'n'.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    int fact = 1;
    for(int i =2; i<=num; ++i)
    {
        fact = fact * i;
    }

    if(num == 0 || num == 1)    cout << fact;
    else if (num<0)             cout << "Not defined";
    else                        cout << fact;
    return 0;
}