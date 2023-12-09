/*
Ques : If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.
*/

#include <iostream>
using namespace std;

int main()
{
    float cp,sp;
    
    cout << "Enter Cost Price : ";
    cin >> cp 
    
    cout << "Enter Selling Price : ";
    cin >> sp;

    if (sp > cp)
    {
        cout << "Profit : " << sp - cp;
    }   
    else
    {
        cout << "Loss : " << cp -sp;
    }

/*
NOTE:- In the above condition we can make Profit and Loss but 
       missed third condition when we have, CP == SP, we made 
       "Neither Profit, nor loss" \
       but as used above if-else statement can only deal with
       two outcome but above condition will categorize it to be
       Loss because every condition apart from (sp>cp) will be
       in else part. 
    
    -- Now we can go for multiple if conditon to cover the third\
       scenario
       */

    if (sp > cp)
    {
        cout << "Profit : " << sp - cp;
    }   
    if (cp > sp)
    {
        cout << "Loss : " << cp -sp;
    }
    if( cp == sp)
    {
        cout << "Neither Profit, nor loss"
    }

/*
NOTE WE CAN DO THE ABOVE COONDITION USING else-if SATETEMENT
AS WELL -- which we will deal later. 
*/
    return 0;
}