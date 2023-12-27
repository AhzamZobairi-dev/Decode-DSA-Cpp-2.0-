/*      Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) 
{
    int x = 10, y = 0 ;
    while ( x >= y )                    // 10>=0 , 9>=1 , 8>=2 , 7>=3 , 6>=4 , 5>=5 , 4>=6
    {                                   //  true , true , true , true , true , true , false
        x-- ;                           //   9   ,  8   ,  7   ,  6   ,  5   ,  4   ,
        y++ ;                           //   1   ,  2   ,  3   ,  4   ,  5   ,  6   ,
        cout << x << " " << y << endl ; //  print, print, print, print, print, print,
    }
}

EXPECTED OUTPUT :-
9 1
8 2
7 3
6 4
5 5
4 6
*/

#include <bits/stdc++.h>
using namespace std;
int main( ) {
    int x = 10, y = 0 ;
    while ( x >= y ) {
        x-- ;
        y++ ;
        cout << x << " " << y << endl ;
    }
}

/*  ACTUAL OUTPUT
9 1
8 2
7 3
6 4
5 5
4 6
*/