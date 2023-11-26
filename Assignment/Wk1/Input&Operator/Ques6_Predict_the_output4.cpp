/*
Find the output of the below code

#include <iostream>
using namespace std;
int main()
{
    int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
    cout<<i;
}

Solution --

1. Dry Run
    - We have declared and initialized varibale i
    - We will follow the operator percendence
    - first we will look into paraenthesis
       (4 + 7 / 5 * 6 * 6+9) % 100

        starting with divide
        7/5 = 1 as both are int then,
        (4 + 1* 6 * 6 + 9) % 100

        then we will multiply under the paraenthesis
        (4 + 36 + 9) % 100

        Now will solve the modulo
        49 % 100 = 49

2. output

49
   
*/

#include <iostream>
using namespace std;

int main()
{
    int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
    cout<<i;
}