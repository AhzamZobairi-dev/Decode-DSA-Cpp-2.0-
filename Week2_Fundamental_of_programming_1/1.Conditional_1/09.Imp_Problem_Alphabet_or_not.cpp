/*      VERY IMPORTANT QUESTION
Ques : Write a program to check whether a
character is an alphabet or not.
*/

/*
    SOME ASCII VALUE TO REMEMBER
    A -- 65         a -- 97         0 -- 4
*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    int ascii = (int)ch;

    if(ascii >=65 && ascii <=90)
    {
        cout << ch << " is Upper case alphabet" ;
    }

    if(ascii >= 97 && ascii <=122)
    {
        cout << ch << " is Lower case alphabet" ;
    }
/* We can use two diffent if-statement to find if the given character
   is alphabet or not,

   We  can condense the codition in one if-satement like below

   if((ascii >=65 && ascii <=90) || (ascii >= 97 && ascii <=122))

Here we need to focus as this can generate some bug in some other cases
if we write the if condition as

    if(ascii >=65 && ascii <=90 || ascii >= 97 && ascii <=122)

    here initially, First && is evaluated then second &&
    then we will take OR or two evaluate staement

    it is happening due to operator precedence heirarcy
            &&  >>>  || 

ALTERNATIVELY lets assume we have the below condition

    if(ascii >=65 || ascii <=90 && ascii >= 97 || ascii <=122)

    -- we intended to execute the first OR condition initially 
       (ascii >=65 || ascii <=90) and then (ascii >= 97 || ascii <=122)
    -- then we will go further with the && operation on the above two 
       evaluated staement

ACTUALLY what happens
    -- since the precedence of && is more than || . First statement to be
       excecuted will be (ascii <=90 && ascii >= 97) and then with the result 
       we will do the OR operation between three

       if(ascii >=65 || result? || ascii <=122)


TO TACKEL THE ABOVE SITUATION WE WILL PUT PARENTHESES

    ( (ascii >=65 && ascii <=90) || (ascii >= 97 && ascii <=122))
*/
    if ( (ascii >=65 && ascii <=90) || (ascii >= 97 && ascii <=122))
    {
        cout << ch << " is alphabet" ;
    }
    else
    {
        cout << ch <<" not an alphabet" ;
    }

    return 0;                                                           
}