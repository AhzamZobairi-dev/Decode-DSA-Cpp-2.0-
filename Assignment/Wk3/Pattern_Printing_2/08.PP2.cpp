/*
        + + + 1
        + + 2 + 2
        + 3 + + + 3
        4 + + + + + 4

*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout << "*";
        }

        cout << i;

        for(int k = 1; k <=2*(i-1)-1; k++)
        {
            cout << "*";
        }

        if(i>1)     cout << i;
        cout << endl;
    }


    return 0;
}