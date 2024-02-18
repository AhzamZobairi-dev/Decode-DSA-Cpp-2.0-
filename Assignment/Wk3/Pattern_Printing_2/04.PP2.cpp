/*      Input n = 4
        Output:-
    
        A B C D E F G
        A B C   E F G
        A B       F G
        A           G

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=2*n-1; i++)        cout << i ;
    cout << endl;

    for(int i=1; i<=n-1; i++)
    {
        int a =1;
        for(int j=1; j<=n-i; j++)           // also, for(int j=n-1; j>=i; j--)
        {
            cout << char( a+64);
            a++;
        }

        for(int k=1; k<=2*i-1; k++)
        {
            cout << "*";
            a++;
        }

        for(int l=1; l<=n-i; l++)           // Also, for(int l=n-1; l>=i; l--)
        {
            cout << char( a+64);
            a++;
        }

        cout << endl;

    }



    return 0;
}