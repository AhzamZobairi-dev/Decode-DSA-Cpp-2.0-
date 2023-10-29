#include<iostream>
using namespace std;

int main()
{

    int x = 5;
    cout << x << endl;
    x = x+1;
    cout << x << endl;  // x = 6

// Here both with incremnt the value the value of x
    x++;                    // Post incement
    cout << x << endl;      // it increments x = 7 

    ++x;                    // pre increment
    cout << x << endl;      // x = 8



/* Now when we are using the pre or post increment in 
separte line, and use it later then this will now make
any difference.
*/
    int y =10;
    y++;       // post increment in place of 10, y =11
    cout << y << endl;  // y = 11

    ++x;     // Pre increment in place of 11, y =12
    cout << y << endl;  // y =12



    int z = 20;
/* But this changes, if we will use pre or post incremnt 
directly in a statement instead.

Now lets use POST INCREMENT in cout. Here first cout 
    will be executed first with z and then z will be 
    incremented. 
*/
    cout << z++ << endl;  //First o/p will be 20 and then
                          //z will be updated to 21

// When we print z now it prints 21 due to POST INCREMENT
// POST INCREMENT -- do the work first then increment
    cout << z << endl;


//PRE INCREMENT -- first increment then do the work
      int a = 9;

// Here the value of a will be updated to 10 then the
// code cout will be executed.
      cout << z++ << endl;  // a = 10 as it is incremented
      cout << z << endl ;    // a = 10 increment was pre. 


/*
 Simialrly Pre and Post Decremnt works 
 */
    int p =5;
    cout << p-- << endl;    // o/p 5 print first then drecrement
    cout << p << endl;      // op 4

    p =10;
    cout << --p << endl;    // o/p 9 decrement first then print
    cout << p << endl;      // o/p 9 
    return 0;
}

/*
Output
5
6
7
8
11
11
20
21
21
22
5
4
9
9

*/