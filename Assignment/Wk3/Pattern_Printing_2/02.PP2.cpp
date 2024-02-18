/*
        Input: n = 4
        Output:
                A
              A B C
            A B C D E
          A B C D E F G
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j=i; j<=n-1; j++)
        {
            cout << " ";
        }

        for(int k=1; k<=2*i-1; k++)
        {
            cout << char(64+k);
        }
        cout << endl;
    
    }
    return 0;
}