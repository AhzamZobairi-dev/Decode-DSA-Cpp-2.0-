#include<iostream>
using namespace std;

void starTriangle(int x)
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);

    int a,b;
    cin >> a >> b;

    starTriangle( a);
    starTriangle( b);
    return 0;
}