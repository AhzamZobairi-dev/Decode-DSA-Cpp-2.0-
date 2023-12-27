/*  WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]

*/

#include <iostream>
using namespace std;
int main( ) 
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int num1 = num;                             //saving variable state
    int rev=0;
    int ld=1;

    while(num>0)
    {
        rev = rev*10;
        ld = num%10;
        num = num/10;
        rev = rev + ld;
    }
    cout << "The sum of "<< num1 << " & "<< rev << " is : " << num1+rev;

    return 0;
}