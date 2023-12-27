/*  WAP to print the sum of all the even digits of a given number.

Sample Input : 4556
Output: 10
*/ 

#include <iostream>
using namespace std;
int main( ) 
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int ld=0;
    int sum = 0;
    while(num>0)
    {   
        ld = num%10;
        if(ld%2 ==0)
        {
            sum = sum + ld;
        }
        num/=10;
    }
    cout << "Sum of even digit is : " << sum;

    return 0;
}