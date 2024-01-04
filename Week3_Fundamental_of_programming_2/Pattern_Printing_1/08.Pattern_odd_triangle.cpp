/*      ODD NUMBER TRIANGLE

    1  
    1 3 
    1 3 5 
    1 3 5 7

needed to take rows and column as input  
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the num of rows : ";
    cin >> row;

//METHOD 1
    cout << "METHOD 1"<< endl ;
    for(int i =1 ; i<=row ; i++)
    {
        int a = 1;
        for(int j=1 ; j<=i; j++)
        {
            cout << a;
            a+=2;
        }
        cout << endl;
    }

//METHOD 2
    cout << endl << "METHOD 2"<< endl ;
    for(int i =1 ; i<=row ; i++)
    {
        for(int j=1 ; j<=2*i-1; j+=2)   // we need first "i" odd number not odd numbers b/w 1 and i
                                        // j <= 2*i-1 is calculate based on AP formula in Wk2/Loop_1/06
                                        //
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}