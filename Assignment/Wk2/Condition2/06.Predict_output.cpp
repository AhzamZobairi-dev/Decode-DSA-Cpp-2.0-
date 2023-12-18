/*          PREDICT OUTPUT

#include <iostream>
using namespace std;
int main() {
  int number = -4;                  // integer variable number is declared and initialized with 04
  char result;                      // character variable result is declared
  result = number > 0 ? 'P' : 'N';  // condition (number>0) => (-4>0) => which is false. So second expression 'N' is initialized in result 
  cout << result << endl;           
  return 0;
}

Note -- Here ternary opeartor is different as both expression is of same data_type, hence no implicit typecasting is needed
        and apart from this the result of ternary operator is stored in character variable c and then printed  
     -- 04.Predict_output.cpp where there is a typecasting of char to int as both expresion are of diffrent data_type and 
        directly given in cout statement.





EXPECTED OUTPUT --
N
*/

#include <iostream>
using namespace std;
int main() {
  int number = -4;
  char result;
  result = number > 0 ? 'P' : 'N';
  cout << result << endl;
  return 0;
}

/* 
ACTUAL OUTPUT
N

*/