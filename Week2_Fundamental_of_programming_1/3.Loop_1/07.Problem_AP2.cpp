/*
Ques : Display this AP - 4,7,10,13,17, ... upto 'n' terms.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of term : " ;
    cin >> n;

// METHOD 1 -- USING SEPARTE VAIABLE 
    int a = 4 ;                     // this a is the first term of the AP
    
    // common difference i.e a2-a1 = a3-a2 => (7-4) = (10-7) = 3. So d =3
    for (int i=1; i<=n; i++ )
    {
        cout << a << endl;
        a += 3;                     // we need to increment 'a' with the common difference, d=3
    }

/*   METHOD 2 -- USING AP FORMULA

-- We have first term i.e 4 . so we can start the loop from 4 by assigning i with 4
-- to find the limiting condition for for th for loop we need to evaluate it using AP formula
        an = a + (n-1)*d = 4 + (n -1)*3 = 4 + 3n -3 = 3n +1
        an = 3*n + 1 
-- We needed to increment the loop controlling variable 'i' with the common diffrence 'd'  
        i = i + 3
*/
    cout <<  endl << "Method 2" << endl ;
    for (int i=4; i<=(3*n + 1); i+=3)
    {
        cout << i << endl;
    }
    return 0;
}