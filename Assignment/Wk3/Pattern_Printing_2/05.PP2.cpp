/*      Number bridge variation

        Input: n = 4
        Output:
        
        1 2 3 4 3 2 1
        1 2 3   3 2 1
        1 2       2 1
        1           1

HINT : Week3 -- Lect:8 Pattern Printing 2 -- problem 07 and 08 -- Star bridge Approach 
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int a=1;
    for(int i =1 ; i<=2*n-1; i++)
    {
        if(i>n)     a = 2*n-i;      //control will not enter till i<=n
        cout <<  a;
        a++;                        // after i<=n, this statement will of no use as it will be 
                                    // overridden by chnages in line 25
                                    /*     Alternative logic
        
                                        cout << a ;
                                        if(i<n)    a++;
                                        else        a--;*/   
    }
    cout<< endl;

    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << j;
        }

        for(int k=1; k<= 2*i-1; k++)
        {
            cout << " ";
        }

        for(int l=n-i; l>=1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}