/*  Ques : Display this AP - 100,97,94,..upto all terms which are positive.
*/

#include <iostream>
using namespace std;

int main()
{
/*      USING MATHEMATICAL FORMAULA FOR AP
    we have
     -- a = 100
     -- d = -3

     we do not know last term that is positive so taht we could iterate it through 
     loop. we can make a inequlity for an > 0 and solve it to get the last positive 
     number
            an > 0 => a + ( n - 1)*d > 0 => 100 + ( n -1 )* -3
                   => 100 - 3n + 3 > 0
                   => 103 > 3n 
                   => n < 34.33
    it mean till 34 term we have +ve term then it will start to become -ve
    we can use it for iterator limiting condition 
*/
    cout <<  endl << "Method 1" << endl ;
    int a = 100;
    for( int i = 1 ; i <= 34 ; i++)
    {
        cout << a << endl;
        a -=3 ;
    }

    cout <<  endl << "Method 2" << endl ;
// METHOD 2
    a= 100;
    for( int i = 1 ; a>0 ; i++)
    {
        cout << a << endl;
        a -=3 ;
    } 

// METHOD 3   
    cout <<  endl << "Method 3" << endl ;
    a= 100;
    for( ; a>0 ; )              // technically i is not used inside loop and we have a limiting condition for loop to exit
    {
        cout << a << endl;
        a -=3 ;                 // varibale is reduced that will checked by limiting condition of loop
    } 

// METHOD 4
//  for (a=100 ; a >0 ; a-=3)
    cout <<  endl << "Method 4" << endl ;
    for (int i = 100; i > 0 ; i -=3)
    {
        cout << i << endl;
    }


// METHOD 5
cout <<  endl << "Method 5" << endl ;
    int n;
    cout << "Enter the number of term : " ;
    cin >> n;
    a=100;
    for (int i =1 ; i <= n ; i++)
    {
        cout << a << endl;
        a -= 3;
        if (a<0) 
        {
            cout << "Last Positive term is : " << i << endl;
            break;
        }
    }

// METHOD 6
    cout <<  endl << "Method 6" << endl ;
    a=100;
    int i =1;
    for (i =1 ; i <= n && a > 0 ; i++)
    {
        cout << a << endl;
        a -= 3;
    }
    cout << "Last Positive term is : " << i -1 << endl; // loop is iterated for i =34 and when loop exited i got incremented 


//METHOD 7 -- We can condense Method 2 like below
    cout <<  endl << "Method 7" << endl ;
    i =1;
    for(a= 100; a>0 ; a -=3 )            
    {
        cout << a << endl;
        i++;
    }
    cout << "Last Positive term is : " << i -1 << endl; 
    return 0;
}