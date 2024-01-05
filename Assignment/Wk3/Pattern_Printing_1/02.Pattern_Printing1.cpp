/*  Print the following pattern
Input: n = 4

Output:

1 2 3 4
1 2 3
1 2
1

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
        for(int j=1; j<=side+1-i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}