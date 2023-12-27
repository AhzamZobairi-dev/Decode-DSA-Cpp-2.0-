/* Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

1
153
370
371
407
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