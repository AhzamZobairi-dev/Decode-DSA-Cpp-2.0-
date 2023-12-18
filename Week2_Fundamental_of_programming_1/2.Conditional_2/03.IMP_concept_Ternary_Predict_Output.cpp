/*          PREDICT THE OUTPUT

#include<iostream>
using namespace std;

int main(){
    int test = 0;
    cout << "First character " << '1' << endl;                  // here everything in "" will be printed i.e <First character > and then a space then character <1> wiil be printed
    cout << "Second character " << (test ? 3 : '1') << endl;    //IMP CONCEPT -  same here first <Second character > will be printed then, (test ? 3 : '1') will be solved  
                                                                // test is 0 which is false so integer typecasted i.e ASCII value of char <1> will be printed.
    return 0;
}

***************************************IMPORTANT CATCH**********************************

-- In ternary operator we cannot give differernt types as expresion like (test ? 3 : "Hello"). This leads to ERROR

-- Here we have two different possiblity of output after resolving the ternary operator (test ? 3 : '1'), 
   the two possible return values are different types:
   -- when test is 1 (true) then 3 which is an integer, and
   -- When test is 90 (false) then '1' = is character. 

-- Since, Here we have test = 0 i.e false, the second expresion will be executed from (test ? 3 : '1').
    -- The output will not be 1 because in ternary operator we cannot give differernt data types as expresion
    -- the first expression here is integer i.e 3, this leads second expression character '1' to get typecasted to integer.
       so the output will be the typecated value of char '1' to an integer. Which means ASCII value of '1' that is 49 

*/


/*      EXPECTED OUTPUT --

First character 1
Second character 49

*/
#include<iostream>
using namespace std;

int main(){
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : "Hello") << endl;
    return 0;
}

/*      ACTUAL OUTPUT

First character 1
Second character 49

*/