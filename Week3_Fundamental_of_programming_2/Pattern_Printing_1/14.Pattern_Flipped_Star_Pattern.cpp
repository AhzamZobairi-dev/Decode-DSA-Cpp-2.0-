/*      FLIPPED STAR TRIANGLE

            *
          * *
        * * *
      * * * *
    * * * * *

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
        for(int j=1; j<=side; j++)
        {
            if((i+j)>=(side+1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }

        }
        cout << endl;
    }

//METHOD 2
/*
    # # # # *           # # # #                   *
    # # # * *           # # #                   * *
    # # * * *       ==  # #         +         * * *
    # * * * *           #                   * * * *
    * * * * *                             * * * * *
                    // PART 1               PART 2


*/
    cout << endl << "Method 2" << endl;
    for (int i=1; i<=side; ++i)
    {
        for(int j=1 ; j<=side-i; j++)           //PART 1
        {
            cout << "  ";
        }

        for(int k=1; k<=i; k++)                 // PART 2
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
