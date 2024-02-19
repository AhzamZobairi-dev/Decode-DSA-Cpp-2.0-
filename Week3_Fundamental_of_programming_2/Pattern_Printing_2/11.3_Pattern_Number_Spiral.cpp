/*      

                1 2 3 4 5 6 7
                        * * *
                        3 2 1           
                | | | | | | |           
        1-      4 4 4 4 4 4 4
        2-      4 3 3 3 3 3 4
        3-      4 3 2 2 2 3 4
        4-      4 3 2 1 2 3 4
        5- *3   4 3 2 2 2 3 4
        6- *2   4 3 3 3 3 3 4
        7- *1   4 4 4 4 4 4 4 


as we move after i==4 and j==4, we will see that 
        our desired row value(say, a) + i(row number) = 8 (2*n)
Similarly,
        our desired column value(say, b) + j(column number) = 8 (2*n)

        For both a and b we can define a formula as 

            a + i = 2*n
            a = 2*n-i;
        &&
            b + j = 2*n
            b = 2*n-j
*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

/*  for row and column number (i or j) goes beyond n, we would have to 
    gradually decrease row & column by one till both i&j reaches 1.
    But without altering the row and column number (i,j) as (i,j) is driving the loop
    we can create another variable(a,b) and find minimum of those.
    When (i,j) >(n,n) we will calculate the value of a and by the formula derived above

                        a = 2*n-i          b = 2*n-j
*/
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=2*n-1; j++)
        {    

            int a = i;
            int b = j;
            if(a>n)     a = 2*n-i;          //if(i>n)       a = 2*n-i;   
            if(b>n)     b = 2*n-j;          //if(j>n)       b = 2*n-j;

            int x = min(a,b);                   // using builtin function min(a,b)
/*
    For n=4, we have change 
            1 --> 4     == n + 1 - 1 = n - 0 
            2 --> 3     == n + 1 - 2 = n -1
            3 --> 2     == n + 1 - 3 = n -2
            .......  
            x = n-i+1   == n + 1 - i
*/
            cout << (n + 1 - x);
        }
        cout << endl;
    }

    return 0;
}