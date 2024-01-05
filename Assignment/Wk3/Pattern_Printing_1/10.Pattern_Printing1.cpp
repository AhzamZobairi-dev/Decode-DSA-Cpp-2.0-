/*  Print the following pattern

Input: n = 4
Output:
1
2 1
3 2 1
4 3 2 1

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
        for(int j=i; j>=1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
