/*      PREDICT HTE OUTPUT

#include <iostream>
using namespace std;
int main(){
    int a = 18; int b = 12;                     // a & b is declared and assigned. a=18 & b=12. These are two different statements as ther is ; between them
    bool t = (a > 20 && b < 15)? true : false;  // t is declared of type bool & assigned with the value obtain after resolving ternary operator
                                                // (a > 20 && b < 15)? true : false  here the condition will be solved first (a > 20 && b < 15) => since 
                                                // >&< is higher in heirarcy than && so >&< will be solved first a>20 => 18>20 => false. Since first expression 
                                                // of && is false irt will not check further condition. As condition is false, second expression will be stored in t = false; 


    cout <<"Value of t: " << t ;                
    return 0;
}

EXPECTED OUTPUT ----

Value of t: 0
*/

#include <iostream>
using namespace std;
int main(){
    int a = 18; int b = 12;  
    bool t = (a > 20 && b < 15)? true : false;
    cout <<"Value of t: " << t ;
    return 0;
}

/*      ACTUAL OUTPUT

Value of t: 0
*/