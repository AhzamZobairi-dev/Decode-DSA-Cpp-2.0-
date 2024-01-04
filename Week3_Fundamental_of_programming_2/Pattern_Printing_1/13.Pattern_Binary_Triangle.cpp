/*      BINARY TRIANGLE

    1
    0 1
    1 0 1
    0 1 0 1

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the number of rows : ";
    cin >> side;

//METHOD1
    cout << "Method 1 " << endl;
    for(int i=1 ; i<=side; i++)
    {
        for(int j=1; j<=i; j++)
        {
           if((i+j)%2==0)
           {
                cout << "1 ";
           }
           else
           {
                cout << "0 ";
           }
        }
        cout << endl;
    }

//METHOD2
    cout << endl << "Method 2 " << endl;
    int a =1;           // can be assign to any value
    for(int i=1 ; i<=side; i++)
    {
        if(i%2==0)  a = 0;
        else        a = 1;
        for(int j=1; j<=i; j++)
        {
            if(a==1)    a=0;
            else        a=1;
            cout << a << " ";
        }
        cout << endl; 
    }
    return 0;
}
