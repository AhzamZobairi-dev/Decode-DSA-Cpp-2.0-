/*      Print the following pattern

Input: n = 4

Output:
A
A B
A B C
A B C D

*/

#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter side of sqaure : ";
    cin >> side;
    

    for(int i=1; i<=side; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << (char)(j+64) << " ";
        }
        cout << endl;
    }
    return 0;
}