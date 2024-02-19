/*              NUMBER BRIDGE

            1 2 3 4 5 6 7
            1 2 3 . 5 6 7
            1 2 . . . 6 7
            1 . . . . . 7
   

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=1; i<=2*n-1; i++)     cout << i;
    cout << endl;

    for(int i=1; i<=n-1; i++)
    {
        int a=1;
        for(int j=1; j<=n-i; j++)       //  for(int j=i; j<=n-1; j++)       
        {
            cout << a;
            a++;
        }
       

        for(int k=1; k<=2*i-1; k++)
        {
            cout << " ";
            a++;
        }

        
        for(int l=1; l<=n-i; l++)       //  for(int l=i; l<=n-1; l++)       
        {
            cout << a;
            a++;
        }
        
        cout << endl;
    }
}