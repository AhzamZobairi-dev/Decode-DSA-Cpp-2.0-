/*  Print first ‘n’ fibonacci numbers.
Sample Input : 10
Output :

*/

#include <iostream>
using namespace std;
int main( ) 
{
    int num;
    cout << "Enter a number of term : ";
    cin >> num;
    
    int a=1,b=1;
    int sum=0;
    if(num == 1)  cout << a ;
    if(num >= 2)  cout << a << " " << b << " ";
    for (int i =3; i<=num; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << b << " ";
    }

}