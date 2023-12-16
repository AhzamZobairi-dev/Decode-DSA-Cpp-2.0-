/*
Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1
*/

// NOTE -- THIS CODE CAN BE DONE ALSO USING LOOP SINCE TILL HERE TOPIC IS NOT COVERED,SO I HAVE ADDED
// THIS CODE USING LOOP IN SAME REPOSITORY WITH NAME 99.Alternative_Sol_Count_Min_notes.cpp   

#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter Amount : ";
    cin >> amount;

    int note_500=0, note_200=0, note_100=0, note_50=0, note_20=0, note_10=0;

    switch(amount >= 500)
    {
        case 1:
            note_500 = amount /500;
            amount = amount - (note_500 * 500);
    }

    switch(amount >= 200 && amount < 500)
    {
        case 1:
            note_200 = amount / 200;
            amount = amount - (note_200 * 200);
    }

    switch(amount >= 100 && amount < 200)
    {
        case 1:
            note_100 = amount / 100;
            amount = amount - (note_100 * 100);
    }

    switch(amount >= 50 && amount < 100)
    {
        case 1:
            note_50 = amount / 50;
            amount = amount - (note_50 * 50);
    }

    switch(amount >= 20 && amount < 50)
    {
        case 1:
            note_20 = amount / 20;
            amount = amount - (note_20 * 20);
    }

    switch(amount >= 10 && amount < 20)
    {
        case 1:
            note_10 = amount / 10;
            amount = amount - (note_10 * 10);
    }

/*  
After pondering about the expression to put in switch condition I seems illogical to put the condition with extra expression with && here 

for ex: - in switch condition of 200 Rs note
    -- note_200 will fetch total number of 200 Rs note, even if amount is more than 200 and as well multiple of 200 like 400.
    -- if the amount will exceed 400 in multiple of 200 i.e 600 then it will be taken by condition mention in first switch statement 
                    i.e switch(amount >= 500)
       no need to put any further condiiton as -- switch(amount >= 200 && amount < 500)
                    switch ( amount >= 200 ) is enough

-- Also not using any break statement because all cases are in different switch statement, Ideally break statement should be present in case code block 

Moreover it is Ligical AND operation which will evalutate both side if the first expression is correct. But we do not need the condition
after && as it is not logical. This wastes precious computing resources (compute power or memory).

********----- I AM NOT CHANGING THE ABOVE CODE IN THIS PATCH TO DOCUMENT THE MISTAKES I HAVE MADE AND ALSO GOT SOME HELP FROM SOLUTIONS -------********           
*/

    cout << "Notes of";
    if(note_500 > 0)   cout << " \"500\" = " << note_500;
    if(note_200 > 0)   cout << " \"200\" = " << note_200;
    if(note_100 > 0)   cout << " \"100\" = " << note_100;
    if(note_50 > 0)    cout << " \"50\" = " << note_50;
    if(note_20 > 0)    cout << " \"20\" = " << note_20;
    if(note_10 > 0)    cout << " \"10\" = " << note_10;
    
    return 0;

}