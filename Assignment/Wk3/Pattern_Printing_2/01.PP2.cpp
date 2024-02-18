/*
Print the following pattern
Input: n = 5
Output:
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int i=1; i<=n-1 ; i++)              // n-1 because we need 4 row for n=5 as mentioned in question
    {
        //spaces
        for(int j=i; j<=n-1; j++)
        {
            cout << "  ";
        }

        //Numbers
        for(int k=1; k<=2*i-1; k++)
        {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}