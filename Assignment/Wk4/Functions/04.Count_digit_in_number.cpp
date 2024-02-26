//Q4: Write a function to count the number of digits in a number and then print the square of this number.

#include <iostream>
using namespace std;

int countDigit(int num)
{
    int digits=0;
    while(num>0)
    {
        num=num/10;
        digits++;
    }

    return digits;
}

int main()
{
    int n,count=0;
    cout << "Enter a number : ";
    cin >> n;

    count = countDigit(n);
    cout <<"Number of digit " << count << " and square is " << count*count;
    return 0;
}