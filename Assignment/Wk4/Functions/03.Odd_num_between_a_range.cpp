//Q3: Given two numbers a and b, write a function to print all odd numbers between them.

#include <iostream>
using namespace std;


int getOddNumber(int n, int m)
{
    for(int i=n; i<=m; i++)
    {
        if(i%2!=0) cout << i << " ";  
    }
}
void orderCheck(int n, int m)
{
    if(n < m)   getOddNumber(n,m);
    else        getOddNumber(m,n);
}
int main()
{
    int n,m;
    cout << "Enter two number to find odd number between them : ";
    cin >> n >> m;
    
    cout << "Odd numbers are "; 
    orderCheck(n,m);
    return 0;
}