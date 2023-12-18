/*          PREDICT THE OUTPUT

#include<iostream>
using namespace std;
int main( ) 
{
    int a = 5, b, c ;
    b = a = 15 ;                
    c = a < 15 ;
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;
    return 0;
}


Dry Run -- 

    int a = 5, b, c ;        //Here 3 variable is declared a, b & c and a is initialised as 5.
    b = a = 15 ;             // a is reassigned to 15 and then new a is assigned to b (i.e 15)   
    c = a < 15 ;             // a == 15 , so (a<15) is false (i.e 0). So 0 is asigned to c. 
    
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;

Expected Output --

a = 15, b = 15 , c = 0
*/

#include<iostream>
using namespace std;

int main( ) {   
    int a = 5, b, c ;           
    b = a = 15 ;
    c = a < 15 ;
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}

/*  Actual Output

a = 15, b = 15 , c = 0

*/