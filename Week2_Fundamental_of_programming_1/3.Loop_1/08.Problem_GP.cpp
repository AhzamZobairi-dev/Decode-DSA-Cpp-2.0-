/*      GEOMETRI PROGRESSION (GP)

A geometric progression or a geometric sequence is the sequence, in which each term is varied by another
by a common ratio.
    -- a, ar, ar2, ar3, ar4, and so on.

we will come across some main terms, which are denoted as:
    -- a = First term
    -- r = common ratio
    -- ar(n-1) = nth term

COMMON RATIO -- R

    Common ratio = (Any term) / (Preceding term)
                 = tn / tn-1
                = (ar(n – 1)) /(ar(n – 2)) = r

Nth TERM OF GP
    -- Let 'a' be the first term and 'r' be the common ratio for a Geometric Sequence.
       Then, the second term, a2 = a × r = ar
       Third term, a3 = a2 × r = ar × r = ar2
       Similarly, nth term, an = ar(n-1)

        an = tn = ar(n-1)

SUM OF n Term OF GP  
    -- Sn = a[(r^n – 1)/(r – 1)] if r ≠ 1 and r > 1
    -- Sn = a[(1 – rn)/(1 – r)] if r ≠ 1 and r < 1
    
    when 0 < r < 1, the sum of the geometric series will converge to a finite value as n increases. 
    This is because the term r^n will approach zero as N becomes very large
    -- S(inf) = a/(r – 1)


Ques : Display this GP - 1,2,4,8,16,32,.. upto 'n'terms.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of term : " ;
    cin >> n;

//METHOD 1  -- best method
    int a = 1;
    for(int i = 1; i <=n ; i++)
    {
        cout << a << endl;
        a *= 2;
    }

/*  METHOD 2

    -- declare and initialize the loop variable with 1 as it is first term
    -- we need to find the limiting condition by determining the nth term
        Sn = a[(r^n – 1)/(r – 1)]      
           = 1[(2^n - 1)/2-1)] = 2^n -1
    -- We need to increment it by r
            i = i * r

so the for loop will be 
        for (int i = 1; i <= 2^n-1; i*=r)

THERE IS A USE OF EXPONENT IN CONDITION AS (2^n -1) WE WOULD HAVE TO INCLUDE 
AN EXTRA HEADER FILE AND USE A NEW FUNCTION
    -- #include <cmath>
    -- pow(2,n)             // both are int
*/
    cout <<  endl << "Method 2" << endl; 
    for(int i=1; i <= (pow(2,n)-1); i*=2)
    {
        cout << i << endl;
    }

    return 0;
}