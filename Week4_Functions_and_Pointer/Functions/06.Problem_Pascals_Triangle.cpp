/*              PASCAL's TRIANGLE

                1    
              1    1    
            1    2    1    
          1    3    3    1    
        1    4    6    4    1 

*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2; i<=n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int Combination(int n, int r)
{
    int ncr = (factorial(n)/(factorial(n-r)*factorial(r)));
    return ncr;
}

int main()
{
    int n;

    cout << "Enter the number of rows : ";
    cin >>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << Combination(i,j) << "    ";        //iCj
        }
        cout << endl;
    }

}