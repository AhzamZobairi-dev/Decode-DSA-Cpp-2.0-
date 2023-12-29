/*
ARMSTRONG NUMBER -- an Armstrong number in a given number base b is a number that is the sum of its own digits each 
                    raised to the power of the number of digits.

        for ex -- 153 is 3 digit number => (1*1*1)+(5*5*5)+(3*3*3) should be equal to 153
                                              1   +  125  +   27  ==  153    ARMSTRONG NUMBER
                
                  1634 is a 4 digit number => (1*1*1*1)+(6*6*6*6)+(3*3*3*3)+(4*4*4*4) shoud be equal to 1634
                                                  1    +  1296   +    81   +   256    ==  1634  ARMSTRONG NUMBER
*/ 


#include <iostream>
using namespace std;
int main( ) 
{
    int ld=0, value;
    
    for(int i=1; i <=5000 ; i++)
    {  
        int temp=i;
        int count=0;
        while(temp>0)
        {
            temp/=10;
            count++;
        } 

        int num = i;
        int arm=0;
        while(num>0)
        {   
            ld = num%10;
            int rep = count;
            value=1;
            while(rep>0)
            {
                value = value*ld;
                rep--;
            }
            arm+=value;
            num/=10;
        }
        if(i==arm)  cout<<i<<endl;
    }
}