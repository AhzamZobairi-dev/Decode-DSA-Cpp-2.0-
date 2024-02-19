/*
              1 2 3 4            
              | | | |            
        1-    1 1 1 1
        2-    1 2 2 2 
        3-    1 2 3 3 
        4-    1 2 3 4 

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=n; j++)
        {            
            cout << min(i,j);                   // using builtin function min(a,b)
        }
        cout << endl;
    }

    return 0;
}