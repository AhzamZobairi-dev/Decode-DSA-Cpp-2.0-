/* Print the factorials of first ‘n’ numbers
Sample Input : 10
Output :
*/

#include <iostream>
using namespace std;
int main( ) 
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int fact=1;
    for(int i =1 ; i<=num; i++)
    {
        fact = fact *i;
        cout << fact << endl;
    }

    return 0;
}