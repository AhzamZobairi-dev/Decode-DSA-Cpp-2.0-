/* Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

1
153
370
371
407


NOTE -- THIS CODE IS WRITTEN UPON THE DEFINITION GIVEN IN THE QUESTION WHICH IS INCOMPLETE BUT ACTUAL DEFINITION OF 
ARMSTRONG NUMBER IS DIFFERENT.
FOR ACTUAL DETAILED CODE REFER THIS -- 
https://github.com/AhzamZobairi-dev/Decode-DSA-Cpp-2.0-/commit/1998cdca5c9e2d83d147b79b48815d460847168d
*/          

#include <iostream>
using namespace std;
int main( ) 
{
    int ld=0, num, arm;
    for(int i=1; i <=500 ; i++)
    {   
        num = i;
        arm=0;
        while(num>0)
        {
            ld = num%10;
            ld = (ld*ld*ld);
            arm+=ld;
            num/=10;
            if(i==arm)  cout<<i<<endl;
        }
        
    }
}


/* if(i==arm)  cout<<i<<endl;       -- this statement here will create a bug
1, 64, 125, 153, 216, 370, 371, 407

for example -- num=64
        for(int i=1; i <=500 ; i++)
    {   
        num = i;                // lets take take i = 64, num =64
        arm=0;                  // arm = 0
        while(num>0)            // 64 > 0
        {
            ld = num%10;        //ld =  4
            ld = (ld*ld*ld);    //ld = 64
            arm+=ld;            //arm = 64
            num/=10;            //num = 6
            if(i==arm)  cout<<i<<endl;      // condition got hit as arm==i==64 but we only have done sum
                                            of 4*4*4=64. The correct answer will be 4*4*4+6*6*6 = 280
                                            which is not an armstrong number. 
        )
        

ARMSTRONG NUMBER -- an Armstrong number in a given number base b is a number that is the sum of its own digits each 
                    raised to the power of the number of digits.

        for ex -- 153 is 3 digit number => (1*1*1)+(5*5*5)+(3*3*3) should be equal to 153
                                              1   +  125  +   27  ==  153    ARMSTRONG NUMBER
                
                  1634 is a 4 digit number => (1*1*1*1)+(6*6*6*6)+(3*3*3*3)+(4*4*4*4) shoud be equal to 1634
                                                  1    +  1296   +    81   +   256    ==  1634  ARMSTRONG NUMBER
*/ 