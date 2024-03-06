#include <iostream>
using namespace std;

int hcf(int x, int y)
{
    int hcf=1;
    for(int i=1; i<=min(x,y); i++)
    {
        if((x%i==0) && (y%i==0))
            hcf =  i;      
    }
    return hcf;
}

//better code than hcf() fucntion

int gcd(int x, int y)
{
    int gcd=1;
    for(int i=min(x,y);i>=1;i--)
    {
        if((x%i==0) && (y%i==0))
        {
            gcd =  i;
            break;
        }
    }
    return gcd;
}

int main()
{
    int num1,num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    
    cout << "HCF is " << hcf(num1,num2) << endl;
    
    cout << "GCD is " << gcd(num1,num2);
    return 0;
}