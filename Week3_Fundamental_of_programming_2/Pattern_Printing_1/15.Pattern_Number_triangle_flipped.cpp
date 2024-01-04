/*      FLIPPED NUMBER TRIANGLE

          1
        1 2
      1 2 3
    1 2 3 4 

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
        int a=1;
        for(int j=1; j<=side; j++)
        {
            if((i+j)>=(side+1))
            {
                cout << a << " ";
                a++;
            }
            else
            {
                cout << "  ";
            }

        }
        cout << endl;
    }

//METHOD 2
    cout << endl << "Method 2" << endl;
    for (int i=1; i<=side; ++i)
    {
        int a=1;
        for(int j=1 ; j<=side-i; j++)
        {
            cout << "  ";
        }

        for(int k=1; k<=i; k++)
        {
            cout << a <<" ";
            a++;
        }
        cout << endl;
    }

//METHOD 3
    cout << endl << "Method 3" << endl;
    for (int i=1; i<=side; ++i)
    {
        for(int j=1 ; j<=side-i; j++)
        {
            cout << "  ";
        }

        for(int k=1; k<=i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}
