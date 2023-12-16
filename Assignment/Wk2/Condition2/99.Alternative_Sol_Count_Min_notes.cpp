/*              ALTERNATIVE SOLUTION

Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1
*/


#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter Amount : ";
    cin >> amount;

    int note_500=0, note_200=0, note_100=0, note_50=0, note_20=0, note_10=0;
/*  This is an incomplete code as it will only give correct answer till amount is 880 or less
    than 880 will have all the listed note in unit quantity 500 + 200 + 100 + 50 + 20 + 10 = 880
    so any amount above 880 in multiple of 10 will have at least 2 of given denomination

for ex -- 880 will have Note of "500" = 1 "200" = 1 "100" = 1 "50" = 1 "20" = 1 "10" = 1

but for   890 we will have Note of "500" = 1 "200" = 1 "100" = 1 "50" = 1 "20" = 1
but actually to have minimum number of note the correct answer should be 
        
        890 --> Note of "500" = 1 "200" = 1 "100" = 1 "50" = 1 "20" = 2
    
    but we will get the following output

        890 --> Note of "500" = 1 "200" = 1 "100" = 1 "50" = 1 "20" = 1

BETTER SOLUTION -- 
    when we will put the whole switch condition insode a while loop till the (amount = 0)
    then we will get accurate result

        890 --> Note of "500" = 1 "200" = 1 "100" = 1 "50" = 1 "20" = 2
    or
        1200 --> Note of "500" = 2 "200" = 1

*/ 
    while( amount > 0)
    {
        switch(amount >= 500)
        {
            case 1:
             note_500++;
            amount -= 500;
        }

        switch(amount >= 200 && amount < 500)
        {
            case 1:
                note_200++;
                amount -= 200;
        }

        switch(amount >= 100 && amount < 200)
        {
            case 1:
                note_100++;
                amount -= 100;
        }

        switch(amount >= 50 && amount < 100)
        {
            case 1:
                note_50++;
                amount -= 50;
        }

        switch(amount >= 20 && amount < 50)
        {
            case 1:
                note_20++;
                amount -= 20;
        }

        switch(amount >= 10 && amount < 20)
        {
            case 1:
                note_10++;
                amount -= 10;
        }
    }
    
    cout << "Notes of";
    if(note_500 > 0)   cout << " \"500\" = " << note_500;
    if(note_200 > 0)   cout << " \"200\" = " << note_200;
    if(note_100 > 0)   cout << " \"100\" = " << note_100;
    if(note_50 > 0)    cout << " \"50\" = " << note_50;
    if(note_20 > 0)    cout << " \"20\" = " << note_20;
    if(note_10 > 0)    cout << " \"10\" = " << note_10;
    
    return 0;

}