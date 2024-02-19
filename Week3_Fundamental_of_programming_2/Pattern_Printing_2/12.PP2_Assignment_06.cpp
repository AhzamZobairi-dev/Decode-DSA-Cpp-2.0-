/*
        Input : n = 5
        Output:
        *#######*
        #*#####*
        ##*###*
        ###*#*
        ####*
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int x=n-1;
    for(int i=1; i<=n; i++)
    {
        
        for(int j =1; j<i; j++)
        {
            cout <<" ";
        }

        cout << "*";
        
        for(int l=2*x-1; l>=1; l--)
        {
            cout << " ";
        }
        x--;

        if(i!=n)    cout << "*";

        cout << endl;
    }
}