/*                          ARITHMETIC PROGRESSION (AP)        

A mathematical sequence in which the difference between two consecutive terms is always a constant and it is abbreviated as AP.

we will come across some main terms, which are denoted as:
    -- First term (a)
    -- Common difference (d)
    -- nth Term (an)
    -- Sum of the first n terms (Sn)


COMMON DIFFERENCE (d)
    -- d = a2 – a1 = a3 – a2 = ……. = an – a(n – 1)

Nth TERM OF AP
    -- The AP can also be written in terms of common differences, as follows
                 a, a + d, a + 2d, a + 3d, a + 4d, ………. ,a + (n – 1) d

        FORMULA ==>     an = a + (n - 1) * d

SUM OF n TERM OF AP	
    -- S = n/2[2a + (n − 1) × d]

    Sum of all terms in a finite AP with the last term as ‘l’	
    -- s = n/2(a + l)



Ques : Display this AP - 1,3,5,7,9.. upto 'n' terms.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of term : " ;
    cin >> n;

// Wrong code
    for(int i =1 ; i<=n ; i+=2)
    {
        cout << i << endl ;
    }
/*
    there is a mistake in above code instead of displaying AP upto '7' term. This code will dispalys the AP till number 7
    for ex --

        AP -- 1,3,5,7, ....  upto should be like -- 1,3,5,7,9,11,13
    
    Expected Output --
    1
    3
    5
    7
    9
    11
    13

    but this code will print AP till number 7 not 7 terms 
    1
    3
    5
    7
*/
 
    cout <<  endl << "Method 2" << endl ;
    int a = 1;
    for(int i =1 ; i<=n ; i++)
    {
        cout << a << endl ;
        a += 2;
    }

// Using separate value
    cout << endl << "Method 3" << endl  ;
    a = 1;
    for ( int i=1; i<=n ; i++)
    {
        int an = a + (i -1)*2;
        cout << an << endl;
    }


/*  USING FORMULA FOR AP TO DETERMINE THE nth TERM  
        an = a + ( n - 1 ) * d
        
        here a =1 and d= 2

        an = 1 + ( n - 1) * 2
           = 1 + 2n - 2 = 2n - 1

        an = 2n -1

we can use (an = 2n -1) as limiting condition in for-loop
*/
    cout <<  endl <<"Method 3" << endl ;
    for ( int i = 1 ; i <= (2*n-1); i+=2)
    {
        cout << i << endl;
    }


    return 0;
}